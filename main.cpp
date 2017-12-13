#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;

#define MAX_COUNT_TEST 222

struct NV {
    int n;
    vector<int> vi;
};

struct MV {
    int min;
    vector<int> vi1;
    vector<int> vi2;
};

struct responce_fl {
    unsigned int numb;
    bool is_size;
};


NV get_nv(int n, vector<int> vi) {
    NV nv; nv.n = n; nv.vi = vi;
    return nv;
}

MV get_mv(int m, vector<int> vi1, vector<int> vi2) {
    MV mv; mv.min = m; mv.vi1 = vi1; mv.vi2 = vi2;
    return mv;
}

responce_fl get_responce_fl(unsigned int n, bool b) {
    responce_fl rfl; rfl.numb = n; rfl.is_size = b;
    return rfl;
}

bool sort_comp_nv(NV nv1, NV nv2) {
    return nv1.n < nv2.n;
}

int Min(int a, int b) {
    return a < b ? a : b;
}

vector<MV> init_mv(vector<NV> vnv) {
    vector<NV>::iterator it_vnv, it_pair, it_temp;
    vector<MV> vmv;
    int min;
    if (vnv.size() < 2) return vmv;
    
    for (it_vnv = vnv.begin(); it_vnv != vnv.end() && it_vnv != vnv.end()--; it_vnv++) {
        it_pair = vnv.end();
        
        it_temp = it_vnv;
        it_temp++;
        if ((*it_temp).n - (*it_vnv).n == 2) it_pair = it_temp;
        if (it_pair == vnv.end()) {
            it_temp++;
            if ((*it_temp).n - (*it_vnv).n == 2) it_pair = it_temp;
        }
        
        if (it_pair == vnv.end()) continue;
        
        min = (*it_vnv).n + 1;
        vmv.push_back(get_mv(min, (*it_vnv).vi, (*it_pair).vi));
    }
    return vmv;
}

responce_fl find_target_v(MV mv) {
    vector<int>::iterator it_vi1, it_vi2;
    unsigned int s1 = mv.vi1.size(), s2 = mv.vi2.size();
    int i, m = Min(s1, s2);
    
    it_vi1 = mv.vi1.begin();
    it_vi2 = mv.vi2.begin();
    
    for (i = 0; i < m; i++) {
        if (*it_vi1 < *it_vi2) return get_responce_fl(i % 2 + 1, false);
        if (*it_vi1 > *it_vi2) return get_responce_fl(2 - i % 2, false);
        it_vi1++; it_vi2++;
    }
    
    return get_responce_fl(s1 == s2 ? m : m + 1, true);
}

int get_count2(MV mv) {
    responce_fl rfl = find_target_v(mv);
    if (rfl.is_size) return rfl.numb;
    
    vector<int> vi1 = mv.vi1, vi2 = mv.vi2;
    vector<int>::iterator it_vi1 = vi1.begin(), it_vi2 = vi2.begin(), temp;
    bool is_left_l = rfl.numb == 1;
    int curr, emerg_count = 0, count = 0;
    
    if (is_left_l) {
        curr = *it_vi1;
        it_vi1++;
        is_left_l = false;
        count++;
    } else {
        curr = *it_vi2;
        it_vi2++;
        is_left_l = true;
        count++;
    }

    bool is_finish = false;
    
    while (it_vi1 != vi1.end() || it_vi2 != vi2.end()) {
        emerg_count++;
        
        if (emerg_count > 2002) { // Emergency exit
            count = -1;
            is_finish = true;            
        }
        
        if (is_left_l) {
            if (it_vi1 == vi1.end()) is_finish = true;
            while (*it_vi1 <= curr && it_vi1 != vi1.end()) {
                it_vi1++;
                if (it_vi1 == vi1.end()) is_finish = true;
            }
            if (it_vi1 != vi1.end()) {
                curr = *it_vi1;
                it_vi1++;
                is_left_l = false;
                count++;
            }
        } else {
            if (it_vi2 == vi2.end()) is_finish = true;
            while (*it_vi2 <= curr && it_vi2 != vi2.end()) {
                it_vi2++;
                if (it_vi2 == vi2.end()) is_finish = true;
            }
            if (it_vi2 != vi2.end()) {
                curr = *it_vi2;
                it_vi2++;
                is_left_l = true;
                count++;
            }            
        }
        
        if (is_finish) break;
    }
    
    return count;
}

vector<NV> make_map_vnv(vector<NV> vnv) {
    vector<int> vi;
    vector<NV> new_vnv;
    vector<NV>::iterator it_vnv;
    for (it_vnv = vnv.begin(); it_vnv != vnv.end(); it_vnv++) {
        if (new_vnv.empty()) {
            vi.clear();
            vi.push_back((*it_vnv).vi.front());
            new_vnv.push_back(get_nv((*it_vnv).n, vi));
            continue;
        }
        
        if (new_vnv.back().n == (*it_vnv).n) {
            new_vnv.back().vi.push_back((*it_vnv).vi.front());
        } else {
            vi.clear();
            vi.push_back((*it_vnv).vi.front());
            new_vnv.push_back(get_nv((*it_vnv).n, vi));
        }
    }
    return new_vnv;
}

vector<NV> sort_each(vector<NV> vnv) {
    vector<NV>::iterator it_vnv;
    for (it_vnv = vnv.begin(); it_vnv != vnv.end(); it_vnv++) {
        sort((*it_vnv).vi.begin(), (*it_vnv).vi.end());
    }
    return vnv;
}

vector<NV> add_vnv(vector<NV> vnv, int x, int y) {
    vector<int> vi;
    vi.push_back(x);
    vnv.push_back(get_nv(y, vi));
    return vnv;
}

void check() {
    vector<NV> vnv;
    vector<MV> vmv;
    vector<MV>::iterator it_vmv;
    unsigned int n, i, temp_count, test_count;
    int k, x, y, count;
    test_count = 0;
    while (scanf("%u",&n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d %d", &x, &y);
            vnv = add_vnv(vnv, x, y);
        }
        
        sort(vnv.begin(), vnv.end(), sort_comp_nv);
        vnv = make_map_vnv(vnv);
        vnv = sort_each(vnv);
        vmv = init_mv(vnv);

        count = 0;
        for (it_vmv = vmv.begin(); it_vmv != vmv.end(); it_vmv++) {
            temp_count = get_count2(*it_vmv);
            if (temp_count == -1) {
                count = temp_count;
                break;
            }
            if (temp_count > count) count = temp_count;
        }
        printf("%u\n", count);
        vnv.clear(); vmv.clear();
        test_count++;
        if (test_count > MAX_COUNT_TEST) break;
    }
}

int main() {
    check();    
    return 0;
}


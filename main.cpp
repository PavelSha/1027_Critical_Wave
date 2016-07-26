#include <algorithm>
#include <iostream>
#include <vector>
#include <list>
#include <ctime>

using namespace std;

#define MAX_COUNT_TEST 222

struct NL {
    int n;
    list<int> li;
};

struct NV {
    int n;
    vector<int> vi;
};

struct ML {
    int min;
    list<int> li1;
    list<int> li2;
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

NL get_nl(int n, list<int> li) {
    NL nl; nl.n = n; nl.li = li;
    return nl;
}


NV get_nv(int n, vector<int> vi) {
    NV nv; nv.n = n; nv.vi = vi;
    return nv;
}

ML get_ml(int m, list<int> li1, list<int> li2) {
    ML ml; ml.min = m; ml.li1 = li1; ml.li2 = li2;
    return ml;
}

MV get_mv(int m, vector<int> vi1, vector<int> vi2) {
    MV mv; mv.min = m; mv.vi1 = vi1; mv.vi2 = vi2;
    return mv;
}

responce_fl get_responce_fl(unsigned int n, bool b) {
    responce_fl rfl; rfl.numb = n; rfl.is_size = b;
    return rfl;
}

list<int> get_one(int n) {
    list<int> li; li.push_back(n);
    return li;
}

bool comp_nl_by_n(NL nl, int n) {
    return nl.n < n;
}

bool comp_ml_by_min(int m, ML ml) {
    return ml.min < m;
}

// ->------- Prints ------------------------
void print_nv(NV nv) {
    vector<int>::iterator it_vi;
    vector<int> vi = nv.vi;
    cout << nv.n << " -#- ";
    for (it_vi = vi.begin(); it_vi != vi.end(); it_vi++) {
        cout << *it_vi;
        if (it_vi != vi.end()--) cout << ' ';
    }
}

void print_nl(NL nl) {
    list<int>::iterator it_li;
    list<int> li = nl.li;
    cout << nl.n << " - ";
    for (it_li = li.begin(); it_li != li.end(); it_li++) {
        cout << *it_li;
        if (it_li != li.end()--) cout << ' ';
    }
}

void print_ml(ML ml) {
    list<int>::iterator it_li;
    list<int> li1 = ml.li1, li2 = ml.li2;
    cout << ml.min << " | ";
    cout << "l1: ";
    for (it_li = li1.begin(); it_li != li1.end(); it_li++) {
        cout << *it_li << ' ';
    }
    cout << "| " << "l2: ";
    for (it_li = li2.begin(); it_li != li2.end(); it_li++) {
        cout << *it_li;
        if (it_li != li2.end()--) cout << ' ';
    }
}

void print_mv(MV mv) {
    vector<int>::iterator it_vi;
    vector<int> vi1 = mv.vi1, vi2 = mv.vi2;
    cout << mv.min << " | ";
    cout << "v1: ";
    for (it_vi = vi1.begin(); it_vi != vi1.end(); it_vi++) {
        cout << *it_vi << ' ';
    }
    cout << "| " << "v2: ";
    for (it_vi = vi2.begin(); it_vi != vi2.end(); it_vi++) {
        cout << *it_vi;
        if (it_vi != vi2.end()--) cout << ' ';
    }
}

void print_lnl(list<NL> lnl) {
    list<NL>::iterator it_lnl;
    for (it_lnl = lnl.begin(); it_lnl != lnl.end(); it_lnl++) {
        print_nl(*it_lnl);
        cout << endl;
    }
}

void print_vnv(vector<NV> vnv) {
    vector<NV>::iterator it_vnv;
    for (it_vnv = vnv.begin(); it_vnv != vnv.end(); it_vnv++) {
        print_nv(*it_vnv);
        cout << endl;
    }
}

void print_lml(list<ML> lml) {
    list<ML>::iterator it_lml;
    for (it_lml = lml.begin(); it_lml != lml.end(); it_lml++) {
        print_ml(*it_lml);
        cout << endl;
    }
}

void print_vmv(vector<MV> vmv) {
    vector<MV>::iterator it_vmv;
    for (it_vmv = vmv.begin(); it_vmv != vmv.end(); it_vmv++) {
        print_mv(*it_vmv);
        cout << endl;
    }
}

void print_responce_fl(responce_fl rfl) {
    cout << "Size? - " << rfl.is_size << " Numb: " << rfl.numb << endl;
}
// -<------- Prints ------------------------

list<NL> add_a_sort_by_n(list<NL> lnl, int nt, int x) {
    list<NL>::iterator it_lnl;
    list<int>::iterator it_li;
    NL new_nl;
    list<int> temp_li, tli2;
    
    if (lnl.empty()) {
        tli2 = get_one(x);
        lnl.push_back(get_nl(nt, tli2));
        return lnl;
    }
    
    it_lnl = lower_bound(lnl.begin(), lnl.end(), nt, comp_nl_by_n);
    if ((*it_lnl).n == nt) {
        temp_li = (*it_lnl).li;
        it_li = lower_bound(temp_li.begin(), temp_li.end(), x);
        if (x != *it_li) {
            temp_li.insert(it_li, x);
            (*it_lnl).li = temp_li;
        }
    } else {
        tli2 = get_one(x);
        lnl.insert(it_lnl, get_nl(nt, tli2));
    }
    return lnl;
}

int Min(int a, int b) {
    return a < b ? a : b;
}

int get_max_poss(int a, int b) {
    if (a == b) return 2 * a;
    return 2 * Min(a, b) + 1;
}

list<ML> init_ml(list<NL> lnl) {
    list<NL>::iterator it_lnl, it_pair, it_temp;
    list<ML>::iterator it_ml;
    list<ML> ml;
    int min;
    if (lnl.size() < 2) return ml;
    
    for (it_lnl = lnl.begin(); it_lnl != lnl.end() && it_lnl != lnl.end()--; it_lnl++) {
        it_pair = lnl.end();
        
        it_temp = it_lnl;
        it_temp++;
        if ((*it_temp).n - (*it_lnl).n == 2) it_pair = it_temp;
        if (it_pair == lnl.end()) {
            it_temp++;
            if ((*it_temp).n - (*it_lnl).n == 2) it_pair = it_temp;
        }
        
        if (it_pair == lnl.end()) continue;
        
        min = get_max_poss((*it_lnl).li.size(), (*it_pair).li.size());
        
        if (ml.empty()) {
            ml.push_back(get_ml(min, (*it_lnl).li, (*it_pair).li));
        } else {
            it_ml = upper_bound(ml.begin(),ml.end(), min, comp_ml_by_min);
            ml.insert(it_ml, get_ml(min, (*it_lnl).li, (*it_pair).li));
        }
    }
}

vector<MV> init_mv(vector<NV> vnv) {
    vector<NV>::iterator it_vnv, it_pair, it_temp;
    vector<MV>::iterator it_mv;
    vector<MV> mv;
    int min;
    if (vnv.size() < 2) return mv;
    
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
        
//        if (ml.empty()) {
            mv.push_back(get_mv(min, (*it_vnv).vi, (*it_pair).vi));
//        } else {
//            it_ml = upper_bound(ml.begin(),ml.end(), min, comp_ml_by_min);
//            ml.insert(it_ml, get_ml(min, (*it_lnl).li, (*it_pair).li));
//        }
    }
}

responce_fl find_target_l(ML ml) {
    list<int>::iterator it_li1, it_li2;
    unsigned int s1 = ml.li1.size(), s2 = ml.li2.size();
    int i, m = Min(s1, s2);
    
    it_li1 = ml.li1.begin();
    it_li2 = ml.li2.begin();
    
    for (i = 0; i < m; i++) {
        if (*it_li1 < *it_li2) return get_responce_fl(i % 2 + 1, false);
        if (*it_li1 > *it_li2) return get_responce_fl(2 - i % 2, false);
        it_li1++; it_li2++;
    }
    
    return get_responce_fl(s1 == s2 ? m : m + 1, true);
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

//unsigned int get_count(ML ml) {
//    responce_fl rfl = find_target_l(ml);
//    if (rfl.is_size) return rfl.numb;
//    
//    list<int> li1 = ml.li1, li2 = ml.li2;
//    list<int>::iterator it_li1 = li1.begin(), it_li2 = li2.begin(), temp;
//    bool is_left_l = rfl.numb == 1;
//    unsigned int count = 0;
//    int curr;
//    
//    if (is_left_l) {
//        curr = *it_li1;
//        it_li1++;
//        is_left_l = false;
//        count++;
//    } else {
//        curr = *it_li2;
//        it_li2++;
//        is_left_l = true;
//        count++;
//    }
//
//    bool is_finish = false;
//    
//    while (it_li1 != li1.end() || it_li2 != li2.end()) {
//        if (is_left_l) {
//            while (*it_li1 <= curr && it_li1 != li1.end()) {
//                it_li1++;
//                if (it_li1 == li1.end()) is_finish = true;
//            }
//            if (it_li1 != li1.end()) {
//                curr = *it_li1;
//                it_li1++;
//                is_left_l = false;
//                count++;
//            }
//        } else {
//            while (*it_li2 <= curr && it_li2 != li2.end()) {
//                it_li2++;
//                if (it_li2 == li2.end()) is_finish = true;
//            }
//            if (it_li2 != li2.end()) {
//                curr = *it_li2;
//                it_li2++;
//                is_left_l = true;
//                count++;
//            }
//            
//        }
//        
//        if (is_finish) break;
//    }
//    
//    return count;
//}

unsigned int get_count2(MV mv) {
    responce_fl rfl = find_target_v(mv);
    if (rfl.is_size) return rfl.numb;
    
    vector<int> vi1 = mv.vi1, vi2 = mv.vi2;
    vector<int>::iterator it_vi1 = vi1.begin(), it_vi2 = vi2.begin(), temp;
    bool is_left_l = rfl.numb == 1;
    unsigned int count = 0;
    int curr;
    
//    cout << " is_left_l -> " << is_left_l << endl;
//    cout << " size v2 -> " << vi2.size() << endl;
//    temp  = vi2.begin();
//    cout << " is end 1 ? " << (temp == vi2.end()) << endl;
//    temp++;
//    cout << " is end 2 ? " << (temp == vi2.end()) << endl;
    
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
//    cout << " is end 2 ? " << (it_vi2 == vi2.end()) << endl;

    bool is_finish = false;
//    int stop_count = 0;
    
    while (it_vi1 != vi1.end() || it_vi2 != vi2.end()) {
//        stop_count++;
//        if (stop_count > 10) break;
//        cout << " count -> " << count << endl;
//        cout << " curr -> " << count << endl;
//        cout << " it_vi1 -> " << *it_vi1 << endl;
//        cout << " it_vi2 -> " << *it_vi2 << endl;
        if (is_left_l) {
//            cout << "left l " << endl;
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
//            cout << "right l " << endl;
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

bool sort_comp_nl(NL nl1, NL nl2) {
    return nl1.n < nl2.n;
}

bool sort_comp_nv(NV nv1, NV nv2) {
    return nv1.n < nv2.n;
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

void critic_test() {
    clock_t timer;
    vector<int> vi;
    vector<NV> vnv;
    vector<MV> vmv;
    vector<MV>::iterator it_vmv;
    unsigned int n, i, count, temp_count, test_count;
    int k;
    n = 1;
    timer = clock();
//    while (n > 0) {
        vi.clear();
        vi.push_back(-2100000000 - n);
        vnv.push_back(get_nv(-2100000000 - n, vi));

        vi.clear();
        vi.push_back(2100000000 + n);
        vnv.push_back(get_nv(2100000000 + n, vi));

        for (i = 2; i < 1000; i++) {
            vi.clear();
            if (i % 2 == 0) k = -2100000000;
            else k = 2100000000;
            vi.push_back(1000 - i + k + n);
            vnv.push_back(get_nv(i % 7 + k + n, vi));
        }
        sort(vnv.begin(), vnv.end(), sort_comp_nv);
//        vnv.clear();
//        n--;
//    }
//        cout << " Sort NV * 222: " << (clock() - timer) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << endl;
//        print_vnv(vnv);
        vnv = make_map_vnv(vnv);
        cout << " + make map: " << (clock() - timer) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << endl;
        vnv = sort_each(vnv);
        cout << " + sort each: " << (clock() - timer) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << endl;
        vmv = init_mv(vnv);
        cout << " + init vmv: " << (clock() - timer) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << endl;

//        print_vmv(vmv);

        count = 0;
        for (it_vmv = vmv.begin(); it_vmv != vmv.end(); it_vmv++) {
            cout << "1 ! " << endl;
            temp_count = get_count2(*it_vmv);
            cout << "2 ! " << endl;
            if (temp_count > count) count = temp_count;
            cout << "3 ! " << endl;
        }
        cout << "Count: " << count << endl;
        vnv.clear(); vmv.clear();
        n--;
//    }
    
    cout << " 222 tests: " << (clock() - timer) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << endl;    
}

void check() {
    clock_t timer;
    vector<NV> vnv;
    vector<MV> vmv;
    vector<MV>::iterator it_vmv;
    unsigned int n, i, count, temp_count, test_count;
    int k;
    n = 1;
    timer = clock();
//    while (n > 0) {
            
      vnv = add_vnv(vnv, 0, 1);
      vnv = add_vnv(vnv, 1, 0);
      vnv = add_vnv(vnv, 1, -1);
      vnv = add_vnv(vnv, 2, -2);
      vnv = add_vnv(vnv, 3, 1);
      vnv = add_vnv(vnv, 3, -1);
      vnv = add_vnv(vnv, 3, -2);
      vnv = add_vnv(vnv, 4, 1);
      vnv = add_vnv(vnv, 4, -1);
      vnv = add_vnv(vnv, 5, -1);
    
        sort(vnv.begin(), vnv.end(), sort_comp_nv);
//        vnv.clear();
//        n--;
//    }
//        cout << " Sort NV * 222: " << (clock() - timer) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << endl;
//        print_vnv(vnv);
        vnv = make_map_vnv(vnv);
//        cout << " + make map: " << (clock() - timer) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << endl;
        vnv = sort_each(vnv);
//        cout << " + sort each: " << (clock() - timer) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << endl;
        vmv = init_mv(vnv);
//        cout << " + init vmv: " << (clock() - timer) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << endl;

//        print_vmv(vmv);

        count = 0;
        print_vmv(vmv);
        for (it_vmv = vmv.begin(); it_vmv != vmv.end(); it_vmv++) {
            cout << "1 ! " << endl;
            temp_count = get_count2(*it_vmv);
            cout << "2 ! " << endl;
            if (temp_count > count) count = temp_count;
//            cout << "3 ! " << endl;
        }
        cout << "Count: " << count << endl;
        vnv.clear(); vmv.clear();
        n--;
//    }
    
//    cout << " 222 tests: " << (clock() - timer) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << endl;
}

int main() {
    unsigned int n, i, count, temp_count, test_count;
    int x, y;
    list<NL> lnl;
    list<ML> lml;
    list<NL>::iterator it_lnl;
    list<ML>::iterator it_lml;
    vector<NL> vnl;
    
//    test_count = 0;
//    while (cin >> n) {
//        for (i = 0; i < n; i++) {
//            cin >> x;
//            cin >> y;
//            lnl = add_a_sort_by_n(lnl, y, x);
//        }
//        lml = init_ml(lnl);
//        count = 0;
//        for (it_lml = lml.begin(); it_lml != lml.end(); it_lml++) {
//            if (count > (*it_lml).min) break;
//            temp_count = get_count(*it_lml);
//            if (temp_count > count) count = temp_count;
//        }
//        cout << count << endl;
//        lnl.clear(); lml.clear();
//        test_count++;
//        if (test_count > MAX_COUNT_TEST) break;
//    }
    
    clock_t timer;    
// -------------------------------------------------------
//    timer = clock();
//    
//    n = 222;
//    while (n > 0) {
//        for (i = 0; i < 1000; i++) {
//            if (i % 2) y = 1001 + n;
//            else y = 999 + n;
//            x = 10000 - i + n;
//            lnl = add_a_sort_by_n(lnl, y, x);
//        }
//        lml = init_ml(lnl);
//        count = 0;
//        for (it_lml = lml.begin(); it_lml != lml.end(); it_lml++) {
//            if (count > (*it_lml).min) break;
//            temp_count = get_count(*it_lml);
//            if (temp_count > count) count = temp_count;
//        }
////        cout << count << endl;
//        lnl.clear(); lml.clear();
//        n--;
//        
//    }
//    
//    cout << " Time: " << (clock() - timer) / (double)(CLOCKS_PER_SEC / 1000) << " ms" << endl;
// -------------------------------------------------------
        
//    check();
    critic_test();
    
    return 0;
}


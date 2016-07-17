#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

using namespace std;

#define MAX_COUNT_TEST 222

struct NL {
    int n;
    list<int> li;
};

struct ML {
    int min;
    list<int> li1;
    list<int> li2;
};

struct responce_fl {
    unsigned int numb;
    bool is_size;
};


NL get_nl(int n, list<int> li) {
    NL nl; nl.n = n; nl.li = li;
    return nl;
}

ML get_ml(int m, list<int> li1, list<int> li2) {
    ML ml; ml.min = m; ml.li1 = li1; ml.li2 = li2;
    return ml;
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

unsigned int get_count(ML ml) {
    responce_fl rfl = find_target_l(ml);
    if (rfl.is_size) return rfl.numb;
    
    list<int> li1 = ml.li1, li2 = ml.li2;
    list<int>::iterator it_li1 = li1.begin(), it_li2 = li2.begin(), temp;
    bool is_left_l = rfl.numb == 1;
    unsigned int count = 0;
    int curr;
    
    if (is_left_l) {
        curr = *it_li1;
        it_li1++;
        is_left_l = false;
        count++;
    } else {
        curr = *it_li2;
        it_li2++;
        is_left_l = true;
        count++;
    }

    bool is_finish = false;
    
    while (it_li1 != li1.end() || it_li2 != li2.end()) {
        if (is_left_l) {
            while (*it_li1 <= curr && it_li1 != li1.end()) {
                it_li1++;
                if (it_li1 == li1.end()) is_finish = true;
            }
            if (it_li1 != li1.end()) {
                curr = *it_li1;
                it_li1++;
                is_left_l = false;
                count++;
            }
        } else {
            while (*it_li2 <= curr && it_li2 != li2.end()) {
                it_li2++;
                if (it_li2 == li2.end()) is_finish = true;
            }
            if (it_li2 != li2.end()) {
                curr = *it_li2;
                it_li2++;
                is_left_l = true;
                count++;
            }
            
        }
        
        if (is_finish) break;
    }
    
    return count;
}

int main() {
    unsigned int n, i, count, temp_count, test_count;
    int x, y;
    list<NL> lnl;
    list<ML> lml;
    list<NL>::iterator it_lnl;
    list<ML>::iterator it_lml;
    
    test_count = 0;
    while (cin >> n) {
        for (i = 0; i < n; i++) {
            cin >> x;
            cin >> y;
            lnl = add_a_sort_by_n(lnl, y, x);
        }
        lml = init_ml(lnl);
        count = 0;
        for (it_lml = lml.begin(); it_lml != lml.end(); it_lml++) {
            if (count > (*it_lml).min) break;
            temp_count = get_count(*it_lml);
            if (temp_count > count) count = temp_count;
        }
        cout << count << endl;
        lnl.clear(); lml.clear();
        test_count++;
        if (test_count > MAX_COUNT_TEST) break;
    }    
    
    return 0;
}


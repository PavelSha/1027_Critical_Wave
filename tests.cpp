//void test_find_target_l() {
//    
//    list<int> l1,l2;
//    responce_fl rfl;
//    
//    l1.push_back(1); l1.push_back(2); l1.push_back(7); l1.push_back(11); l1.push_back(13);
//    l2.push_back(4); l2.push_back(5); l2.push_back(8); l2.push_back(10);    
//    rfl = find_target_l(get_ml(1, l1, l2));
//    print_responce_fl(rfl);
//    
//    l1.clear(); l2.clear(); 
//    l1.push_back(5); l1.push_back(6); l1.push_back(7); l1.push_back(8);
//    l2.push_back(2); l2.push_back(3);
//    rfl = find_target_l(get_ml(1, l1, l2));
//    print_responce_fl(rfl);
//    
//    l1.clear(); l2.clear(); 
//    l1.push_back(1); l1.push_back(2); l1.push_back(8);
//    l2.push_back(1); l2.push_back(4); l2.push_back(6);
//    rfl = find_target_l(get_ml(1, l1, l2));
//    print_responce_fl(rfl);
//    
//    l1.clear(); l2.clear(); 
//    l1.push_back(2); l1.push_back(4); l1.push_back(6);
//    l2.push_back(2); l2.push_back(4); l2.push_back(5);
//    rfl = find_target_l(get_ml(1, l1, l2));
//    print_responce_fl(rfl);
//    
//    l1.clear(); l2.clear(); 
//    l1.push_back(2); l1.push_back(4); l1.push_back(6);
//    l2.push_back(2); l2.push_back(4); l2.push_back(6);
//    rfl = find_target_l(get_ml(1, l1, l2));
//    print_responce_fl(rfl);
//    
//    l1.clear(); l2.clear();
//    l1.push_back(1); l1.push_back(2); l1.push_back(5);
//    l2.push_back(1); l2.push_back(2); l2.push_back(5); l2.push_back(10);
//    rfl = find_target_l(get_ml(1, l1, l2));
//    print_responce_fl(rfl);
//    
//    l1.clear(); l2.clear();
//    l1.push_back(2); l1.push_back(10); l1.push_back(11); l1.push_back(13);
//    l2.push_back(2); l2.push_back(10); l2.push_back(11);
//    rfl = find_target_l(get_ml(1, l1, l2));
//    print_responce_fl(rfl);
//    
//    l1.clear(); l2.clear();
//    l1.push_back(2);
//    l2.push_back(1);
//    rfl = find_target_l(get_ml(1, l1, l2));
//    print_responce_fl(rfl);
//    
//    l1.clear(); l2.clear();
//    l1.push_back(1);
//    l2.push_back(2);
//    rfl = find_target_l(get_ml(1, l1, l2));
//    print_responce_fl(rfl);
//    
//    l1.clear(); l2.clear();
//    l1.push_back(10);
//    l2.push_back(10);
//    rfl = find_target_l(get_ml(1, l1, l2));
//    print_responce_fl(rfl);
//    
//    l1.clear(); l2.clear();
//    l1.push_back(-5);l1.push_back(4);
//    l2.push_back(-5);l2.push_back(1);l2.push_back(2);l2.push_back(3);l2.push_back(6);
//    rfl = find_target_l(get_ml(1, l1, l2));
//    print_responce_fl(rfl);
//    
//    l1.clear(); l2.clear();
//    l1.push_back(0); l1.push_back(1); l1.push_back(3); l1.push_back(4);
//    l2.push_back(0); l2.push_back(1); l2.push_back(3); l2.push_back(4); l2.push_back(5);
//    rfl = find_target_l(get_ml(1, l1, l2));
//    print_responce_fl(rfl);
//    
//    l1.clear(); l2.clear();
//    l1.push_back(0);
//    l2.push_back(0); l2.push_back(5); l2.push_back(6); l2.push_back(7); l2.push_back(8);
//    rfl = find_target_l(get_ml(1, l1, l2));
//    print_responce_fl(rfl);
//    
//    l1.clear(); l2.clear();
//    l1.push_back(1); l1.push_back(2); l1.push_back(4); l1.push_back(6); l1.push_back(8); l1.push_back(9);
//    l2.push_back(1);
//    rfl = find_target_l(get_ml(1, l1, l2));
//    print_responce_fl(rfl);
//    
//    l1.clear(); l2.clear();
//    l1.push_back(1); l1.push_back(11); l1.push_back(22); l1.push_back(23); l1.push_back(56); l1.push_back(57); l1.push_back(89); l1.push_back(100);
//    l2.push_back(2); l2.push_back(12); l2.push_back(23); l2.push_back(24); l2.push_back(25); l2.push_back(28); l2.push_back(100); l2.push_back(101);
//    rfl = find_target_l(get_ml(1, l1, l2));
//    print_responce_fl(rfl);
//    
//    l1.clear(); l2.clear();
//    l1.push_back(2); l1.push_back(3); l1.push_back(4);
//    l2.push_back(1); l2.push_back(2); l2.push_back(3);
//    rfl = find_target_l(get_ml(1, l1, l2));
//    print_responce_fl(rfl);
//}
//
//void test_get_count() {
//    
//    list<int> l1,l2;
//    responce_fl rfl;
//    
//    l1.push_back(1); l1.push_back(2); l1.push_back(7); l1.push_back(11); l1.push_back(13);
//    l2.push_back(4); l2.push_back(5); l2.push_back(8); l2.push_back(10);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//    
//    l1.clear(); l2.clear(); 
//    l1.push_back(5); l1.push_back(6); l1.push_back(7); l1.push_back(8);
//    l2.push_back(2); l2.push_back(3);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//    
//    l1.clear(); l2.clear(); 
//    l1.push_back(1); l1.push_back(2); l1.push_back(8);
//    l2.push_back(1); l2.push_back(4); l2.push_back(6);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//
//    l1.clear(); l2.clear(); 
//    l1.push_back(2); l1.push_back(4); l1.push_back(6);
//    l2.push_back(2); l2.push_back(4); l2.push_back(5);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//    
//    l1.clear(); l2.clear(); 
//    l1.push_back(2); l1.push_back(4); l1.push_back(6);
//    l2.push_back(2); l2.push_back(4); l2.push_back(6);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//
//    l1.clear(); l2.clear();
//    l1.push_back(1); l1.push_back(2); l1.push_back(5);
//    l2.push_back(1); l2.push_back(2); l2.push_back(5); l2.push_back(10);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//    
//    l1.clear(); l2.clear();
//    l1.push_back(2); l1.push_back(10); l1.push_back(11); l1.push_back(13);
//    l2.push_back(2); l2.push_back(10); l2.push_back(11);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//
//    l1.clear(); l2.clear();
//    l1.push_back(2);
//    l2.push_back(1);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//
//    l1.clear(); l2.clear();
//    l1.push_back(1);
//    l2.push_back(2);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//    
//    l1.clear(); l2.clear();
//    l1.push_back(10);
//    l2.push_back(10);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//
//    l1.clear(); l2.clear();
//    l1.push_back(-5);l1.push_back(4);
//    l2.push_back(-5);l2.push_back(1);l2.push_back(2);l2.push_back(3);l2.push_back(6);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//
//    l1.clear(); l2.clear();
//    l1.push_back(-5);l1.push_back(14);
//    l2.push_back(-5);l2.push_back(1);l2.push_back(2);l2.push_back(3);l2.push_back(6);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//
//    l1.clear(); l2.clear();
//    l1.push_back(0); l1.push_back(1); l1.push_back(3); l1.push_back(4);
//    l2.push_back(0); l2.push_back(1); l2.push_back(3); l2.push_back(4); l2.push_back(5);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//    
//    l1.clear(); l2.clear();
//    l1.push_back(0);
//    l2.push_back(0); l2.push_back(5); l2.push_back(6); l2.push_back(7); l2.push_back(8);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//    
//    l1.clear(); l2.clear();
//    l1.push_back(1); l1.push_back(2); l1.push_back(4); l1.push_back(6); l1.push_back(8); l1.push_back(9);
//    l2.push_back(1);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//    
//    l1.clear(); l2.clear();
//    l1.push_back(1); l1.push_back(11); l1.push_back(22); l1.push_back(23); l1.push_back(56); l1.push_back(57); l1.push_back(89); l1.push_back(100);
//    l2.push_back(2); l2.push_back(12); l2.push_back(23); l2.push_back(24); l2.push_back(25); l2.push_back(28); l2.push_back(100); l2.push_back(101);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//    
//    l1.clear(); l2.clear();
//    l1.push_back(2); l1.push_back(3); l1.push_back(4);
//    l2.push_back(1); l2.push_back(2); l2.push_back(3);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//    
//    l1.clear(); l2.clear();
//    l1.push_back(10); l1.push_back(11); l1.push_back(12); l1.push_back(13); l1.push_back(14);
//    l2.push_back(1); l2.push_back(2); l2.push_back(3); l2.push_back(4); l2.push_back(5);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//    
//    l1.clear(); l2.clear();
//    l1.push_back(1); l1.push_back(5); l1.push_back(6); l1.push_back(7); l1.push_back(12);
//    l2.push_back(2); l2.push_back(3); l2.push_back(4); l2.push_back(8); l2.push_back(9);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//    
//    l1.clear(); l2.clear();
//    l1.push_back(2); l1.push_back(3); l1.push_back(4); l1.push_back(5); l1.push_back(6);
//    l2.push_back(6); l2.push_back(7); l2.push_back(8);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//    
//    l1.clear(); l2.clear();
//    l1.push_back(2); l1.push_back(3); l1.push_back(4); l1.push_back(6); l1.push_back(7);
//    l2.push_back(6); l2.push_back(7); l2.push_back(8);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//    
//    l1.clear(); l2.clear();
//    l1.push_back(2); l1.push_back(3); l1.push_back(4); l1.push_back(6); l1.push_back(17);
//    l2.push_back(6); l2.push_back(7); l2.push_back(8);
//    cout << "Count: " << get_count(get_ml(1, l1, l2)) << endl;
//}
//void test_get_count2() {
//    
//    vector<int> v1,v2;
//    responce_fl rfl;
//    
//    v1.push_back(1); v1.push_back(2); v1.push_back(7); v1.push_back(11); v1.push_back(13);
//    v2.push_back(4); v2.push_back(5); v2.push_back(8); v2.push_back(10);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 5" << endl;
//    
//    v1.clear(); v2.clear(); 
//    v1.push_back(5); v1.push_back(6); v1.push_back(7); v1.push_back(8);
//    v2.push_back(2); v2.push_back(3);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 2"<< endl;
//    
//    v1.clear(); v2.clear(); 
//    v1.push_back(1); v1.push_back(2); v1.push_back(8);
//    v2.push_back(1); v2.push_back(4); v2.push_back(6);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 4"<< endl;
//
//    v1.clear(); v2.clear(); 
//    v1.push_back(2); v1.push_back(4); v1.push_back(6);
//    v2.push_back(2); v2.push_back(4); v2.push_back(5);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 4"<< endl;
//    
//    v1.clear(); v2.clear(); 
//    v1.push_back(2); v1.push_back(4); v1.push_back(6);
//    v2.push_back(2); v2.push_back(4); v2.push_back(6);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 3"<< endl;
//
//    v1.clear(); v2.clear();
//    v1.push_back(1); v1.push_back(2); v1.push_back(5);
//    v2.push_back(1); v2.push_back(2); v2.push_back(5); v2.push_back(10);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 4"<< endl;
//    
//    v1.clear(); v2.clear();
//    v1.push_back(2); v1.push_back(10); v1.push_back(11); v1.push_back(13);
//    v2.push_back(2); v2.push_back(10); v2.push_back(11);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 4"<< endl;
//
//    v1.clear(); v2.clear();
//    v1.push_back(2);
//    v2.push_back(1);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 2"<< endl;
//
//    v1.clear(); v2.clear();
//    v1.push_back(1);
//    v2.push_back(2);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 2"<< endl;
//    
//    v1.clear(); v2.clear();
//    v1.push_back(10);
//    v2.push_back(10);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 1"<< endl;
//
//    v1.clear(); v2.clear();
//    v1.push_back(-5);v1.push_back(4);
//    v2.push_back(-5);v2.push_back(1);v2.push_back(2);v2.push_back(3);v2.push_back(6);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 4"<< endl;
//
//    v1.clear(); v2.clear();
//    v1.push_back(-5);v1.push_back(14);
//    v2.push_back(-5);v2.push_back(1);v2.push_back(2);v2.push_back(3);v2.push_back(6);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 3"<< endl;
//
//    v1.clear(); v2.clear();
//    v1.push_back(0); v1.push_back(1); v1.push_back(3); v1.push_back(4);
//    v2.push_back(0); v2.push_back(1); v2.push_back(3); v2.push_back(4); v2.push_back(5);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 5"<< endl;
//    
//    v1.clear(); v2.clear();
//    v1.push_back(0);
//    v2.push_back(0); v2.push_back(5); v2.push_back(6); v2.push_back(7); v2.push_back(8);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 2"<< endl;
//    
//    v1.clear(); v2.clear();
//    v1.push_back(1); v1.push_back(2); v1.push_back(4); v1.push_back(6); v1.push_back(8); v1.push_back(9);
//    v2.push_back(1);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 2" << endl;
//    
//    v1.clear(); v2.clear();
//    v1.push_back(1); v1.push_back(11); v1.push_back(22); v1.push_back(23); v1.push_back(56); v1.push_back(57); v1.push_back(89); v1.push_back(100);
//    v2.push_back(2); v2.push_back(12); v2.push_back(23); v2.push_back(24); v2.push_back(25); v2.push_back(28); v2.push_back(100); v2.push_back(101);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 8" << endl;
//    
//    v1.clear(); v2.clear();
//    v1.push_back(2); v1.push_back(3); v1.push_back(4);
//    v2.push_back(1); v2.push_back(2); v2.push_back(3);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 4" << endl;
//    
//    v1.clear(); v2.clear();
//    v1.push_back(10); v1.push_back(11); v1.push_back(12); v1.push_back(13); v1.push_back(14);
//    v2.push_back(1); v2.push_back(2); v2.push_back(3); v2.push_back(4); v2.push_back(5);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 2"<< endl;
//    
//    v1.clear(); v2.clear();
//    v1.push_back(1); v1.push_back(5); v1.push_back(6); v1.push_back(7); v1.push_back(12);
//    v2.push_back(2); v2.push_back(3); v2.push_back(4); v2.push_back(8); v2.push_back(9);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 5"<< endl;
//    
//    v1.clear(); v2.clear();
//    v1.push_back(2); v1.push_back(3); v1.push_back(4); v1.push_back(5); v1.push_back(6);
//    v2.push_back(6); v2.push_back(7); v2.push_back(8);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 2"<< endl;
//    
//    v1.clear(); v2.clear();
//    v1.push_back(2); v1.push_back(3); v1.push_back(4); v1.push_back(6); v1.push_back(7);
//    v2.push_back(6); v2.push_back(7); v2.push_back(8);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 4"<< endl;
//    
//    v1.clear(); v2.clear();
//    v1.push_back(2); v1.push_back(3); v1.push_back(4); v1.push_back(6); v1.push_back(17);
//    v2.push_back(6); v2.push_back(7); v2.push_back(8);
//    cout << "Count: " << get_count2(get_mv(1, v1, v2)) << " Should: 3"<< endl;
//}
//void test_init_ml() {    
//    lnl = add_a_sort_by_n(lnl, 1, 0);
//    ml = init_ml(lnl);
//    print_lml(ml);
//    
//    lnl.clear(); cout << " --------------------------- " << endl;
//    lnl = add_a_sort_by_n(lnl, 1, 0);
//    lnl = add_a_sort_by_n(lnl, 4, 5);
//    ml = init_ml(lnl);
//    print_lml(ml);
//    
//    lnl.clear(); cout << " --------------------------- " << endl;
//    lnl = add_a_sort_by_n(lnl, 4, 0);
//    lnl = add_a_sort_by_n(lnl, 1, 5);
//    ml = init_ml(lnl);
//    print_lml(ml);
//    
//    lnl.clear(); cout << " --------------------------- " << endl;
//    lnl = add_a_sort_by_n(lnl, 4, 0);
//    lnl = add_a_sort_by_n(lnl, 4, 5);
//    ml = init_ml(lnl);
//    print_lml(ml);
//    
//    lnl.clear(); cout << " --------------------------- " << endl;
//    lnl = add_a_sort_by_n(lnl, 4, 0);
//    lnl = add_a_sort_by_n(lnl, 6, -1);
//    ml = init_ml(lnl);
//    print_lml(ml);
//    
//    lnl.clear(); cout << " --------------------------- " << endl;
//    lnl = add_a_sort_by_n(lnl, 6, 0);
//    lnl = add_a_sort_by_n(lnl, 4, -1);
//    ml = init_ml(lnl);
//    print_lml(ml);
//    
//    lnl.clear(); cout << " --------------------------- " << endl;
//    lnl = add_a_sort_by_n(lnl, 6, 0);
//    lnl = add_a_sort_by_n(lnl, 4, 0);
//    ml = init_ml(lnl);
//    print_lml(ml);
//    
//    lnl.clear(); cout << " --------------------------- " << endl;
//    lnl = add_a_sort_by_n(lnl, 6, 0);
//    lnl = add_a_sort_by_n(lnl, 4, 0);
//    lnl = add_a_sort_by_n(lnl, 4, 5);
//    lnl = add_a_sort_by_n(lnl, 4, -5);
//    lnl = add_a_sort_by_n(lnl, 4, 6);
//    lnl = add_a_sort_by_n(lnl, 4, 1);
//    lnl = add_a_sort_by_n(lnl, 4, 6);
//    lnl = add_a_sort_by_n(lnl, 4, -1);
//    lnl = add_a_sort_by_n(lnl, 6, -1);
//    ml = init_ml(lnl);
//    print_lml(ml);
//    
//    lnl.clear(); cout << " --------------------------- " << endl;
//    lnl = add_a_sort_by_n(lnl, 1, 1);
//    lnl = add_a_sort_by_n(lnl, 2, 2);
//    lnl = add_a_sort_by_n(lnl, 3, 3);
//    lnl = add_a_sort_by_n(lnl, 4, 4);
//    lnl = add_a_sort_by_n(lnl, 5, 5);
//    lnl = add_a_sort_by_n(lnl, 6, 6);
//    lnl = add_a_sort_by_n(lnl, 8, 8);
//    lnl = add_a_sort_by_n(lnl, 9, 9);
//    lnl = add_a_sort_by_n(lnl, 10, 10);
//    ml = init_ml(lnl);
//    print_lml(ml);
//    
//    lnl.clear(); cout << " --------------------------- " << endl;
//    lnl = add_a_sort_by_n(lnl, 1, 1);
//    lnl = add_a_sort_by_n(lnl, 2, 2);
//    lnl = add_a_sort_by_n(lnl, 2, -2);
//    lnl = add_a_sort_by_n(lnl, 3, 3);
//    lnl = add_a_sort_by_n(lnl, 3, -3);
//    lnl = add_a_sort_by_n(lnl, 3, 0);
//    lnl = add_a_sort_by_n(lnl, 4, 4);
//    lnl = add_a_sort_by_n(lnl, 4, -4);
//    lnl = add_a_sort_by_n(lnl, 4, 2);
//    lnl = add_a_sort_by_n(lnl, 4, -2);
//    lnl = add_a_sort_by_n(lnl, 5, 5);
//    lnl = add_a_sort_by_n(lnl, 5, -5);
//    lnl = add_a_sort_by_n(lnl, 5, 0);
//    lnl = add_a_sort_by_n(lnl, 5, -3);
//    lnl = add_a_sort_by_n(lnl, 5, 3);
//    lnl = add_a_sort_by_n(lnl, 6, 6);
//    lnl = add_a_sort_by_n(lnl, 6, -6);
//    lnl = add_a_sort_by_n(lnl, 6, -4);
//    lnl = add_a_sort_by_n(lnl, 6, 4);
//    lnl = add_a_sort_by_n(lnl, 6, 2);
//    lnl = add_a_sort_by_n(lnl, 6, -2);
//    lnl = add_a_sort_by_n(lnl, 8, 8);
//    lnl = add_a_sort_by_n(lnl, 8, -8);
//    lnl = add_a_sort_by_n(lnl, 8, -5);
//    lnl = add_a_sort_by_n(lnl, 8, 5);
//    lnl = add_a_sort_by_n(lnl, 8, -3);
//    lnl = add_a_sort_by_n(lnl, 8, 3);
//    lnl = add_a_sort_by_n(lnl, 8, 2);
//    lnl = add_a_sort_by_n(lnl, 8, -1);
//    lnl = add_a_sort_by_n(lnl, 9, 9);
//    lnl = add_a_sort_by_n(lnl, 9, -9);
//    lnl = add_a_sort_by_n(lnl, 9, 0);
//    lnl = add_a_sort_by_n(lnl, 9, -2);
//    lnl = add_a_sort_by_n(lnl, 9, 2);
//    lnl = add_a_sort_by_n(lnl, 9, -4);
//    lnl = add_a_sort_by_n(lnl, 9, 4);
//    lnl = add_a_sort_by_n(lnl, 9, 1);
//    lnl = add_a_sort_by_n(lnl, 10, 10);
//    lnl = add_a_sort_by_n(lnl, 10, -9);
//    lnl = add_a_sort_by_n(lnl, 10, 8);
//    lnl = add_a_sort_by_n(lnl, 10, -7);
//    lnl = add_a_sort_by_n(lnl, 10, 6);
//    lnl = add_a_sort_by_n(lnl, 10, -5);
//    lnl = add_a_sort_by_n(lnl, 10, 4);
//    lnl = add_a_sort_by_n(lnl, 10, -4);
//    lnl = add_a_sort_by_n(lnl, 10, 3);
//    lnl = add_a_sort_by_n(lnl, 10, -2);
//    ml = init_ml(lnl);
//    print_lml(ml);
//}

//void test_main() {
//    lnl = add_a_sort_by_n(lnl, 6, 3);
//    lnl = add_a_sort_by_n(lnl, -101, 101);
//    lnl = add_a_sort_by_n(lnl, 6, 7);
//    lnl = add_a_sort_by_n(lnl, -99, 102);
//    lnl = add_a_sort_by_n(lnl, 4, 4);
//    lnl = add_a_sort_by_n(lnl, -101, 104);
//    lnl = add_a_sort_by_n(lnl, -99, 100);
//    lnl = add_a_sort_by_n(lnl, 4, 6);
//    lnl = add_a_sort_by_n(lnl, 13, -50);
//    lnl = add_a_sort_by_n(lnl, 13, -41);
//    lnl = add_a_sort_by_n(lnl, 6, 1);
//    lnl = add_a_sort_by_n(lnl, 4, 2);
//    lnl = add_a_sort_by_n(lnl, 11, -45);
//    lnl = add_a_sort_by_n(lnl, -99, 105);
//    lnl = add_a_sort_by_n(lnl, 6, 5);
//    
//    lml = init_ml(lnl);
//    count = 0;
//    for (it_lml = lml.begin(); it_lml != lml.end(); it_lml++) {
//        if (count > (*it_lml).min) break;
//        cout << "Check - min: " << (*it_lml).min << endl;
//        temp_count = get_count(*it_lml);
//        if (temp_count > count) count = temp_count;
//    }
//    cout << "Count: " << count << endl;
//}

// ->------- Prints ------------------------
//void print_nl(NL nl) {
//    list<int>::iterator it_li;
//    list<int> li = nl.li;
//    cout << nl.n << " - ";
//    for (it_li = li.begin(); it_li != li.end(); it_li++) {
//        cout << *it_li;
//        if (it_li != li.end()--) cout << ' ';
//    }
//}
//
//void print_ml(ML ml) {
//    list<int>::iterator it_li;
//    list<int> li1 = ml.li1, li2 = ml.li2;
//    cout << ml.min << " | ";
//    cout << "l1: ";
//    for (it_li = li1.begin(); it_li != li1.end(); it_li++) {
//        cout << *it_li << ' ';
//    }
//    cout << "| " << "l2: ";
//    for (it_li = li2.begin(); it_li != li2.end(); it_li++) {
//        cout << *it_li;
//        if (it_li != li2.end()--) cout << ' ';
//    }
//}
//
//void print_lnl(list<NL> lnl) {
//    list<NL>::iterator it_lnl;
//    for (it_lnl = lnl.begin(); it_lnl != lnl.end(); it_lnl++) {
//        print_nl(*it_lnl);
//        cout << endl;
//    }
//}
//
//void print_lml(list<ML> lml) {
//    list<ML>::iterator it_lml;
//    for (it_lml = lml.begin(); it_lml != lml.end(); it_lml++) {
//        print_ml(*it_lml);
//        cout << endl;
//    }
//}
//
//void print_responce_fl(responce_fl rfl) {
//    cout << "Size? - " << rfl.is_size << " Numb: " << rfl.numb << endl;
//}
// -<------- Prints ------------------------
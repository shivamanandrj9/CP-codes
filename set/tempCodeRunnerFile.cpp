s2.erase(s2.begin(), s2.find(3)); //deletes all element less than 3;
    for (auto &i : s2)
        cout << i << " ";
    cout << endl;
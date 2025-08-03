bool cmp(const pair<int, int>&a, const pair<int,int>&b){
    if(a.first < b.first) return 1;
    else if(a.first == b.first) return (a.second > b.second);
    return false;
}

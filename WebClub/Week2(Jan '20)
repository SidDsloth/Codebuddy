vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
    set <vector<int>> soln;
    vector<vector<int>> sol;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i++)
    {
        for(int j=i+1;j<A.size();j++)
        {
            int rem=B-(A[i]+A[j]);
            int p=j+1;
            int q=A.size()-1;
            while(p<q)
            {
                if((A[p]+A[q])>rem)
                {
                    q--;
                }
                else if((A[p]+A[q])<rem)
                {
                    p++;
                }
                else
                {
                    vector<int>ans;
                    ans.push_back(A[i]);
                    ans.push_back(A[j]);
                    ans.push_back(A[p]);
                    ans.push_back(A[q]);
                    p++;
                    q--;
                    soln.insert(ans);
                }
            }
        }
    }
    for(auto s : soln)
        sol.push_back(s);
    return sol;
}

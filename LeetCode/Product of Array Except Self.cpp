vector<int> productExceptSelf(vector<int>& v) {
         int n =v.size();
        int pre[n+5],suf[n+5];
       
        pre[0]=1; suf[n+1]=1;
        for(int i=0;i<n;i++)
            pre[i+1]=pre[i]*v[i];
        for(int i=n;i>0;i--)
            suf[i]=suf[i+1]*v[i-1];
        vector<int> vv;
        for(int i=1;i<=n;i++)
            vv.push_back(pre[i-1]*suf[i+1]);
        return vv;
    }

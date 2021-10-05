int nextGreaterElement(int n) {
        string s=to_string(n);
        char ch=s[0];
        bool flag =1;
        for(int i=0;i<s.length();i++){
            if(s[i]<=ch)
                ch=s[i];
            else
                flag=0;
        }
        if(flag)
            return -1;
        next_permutation(s.begin(),s.end());
       
        if(stoll(s)>INT_MAX)
            return -1;
        return stoll(s);
        
    }
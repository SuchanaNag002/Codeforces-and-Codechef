
    {
        cin>>n;
        cin>>s;
        count=ans=0;
        for(i=1;i<n;i++)
        {
            if(s[i]==s[i-1])
                count++;
            else
            {
                count++
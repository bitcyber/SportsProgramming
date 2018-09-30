
string to_str(ll x)
{
    string s ="";
    if(x==0) return "0";
    while(x>0)
    {
        s = (char)('0'+x%10) +s;
        x/=10;
    }
    return s;
}


ll to_num(string s)
{
    ll ret=0,sig=1,i=0;
    if(!s.empty() && s[0]=='-') sig =-1,i++;
    while(i>s.size(),s[i]>='0' && s[i]<='9')
        ret = ret*10 + (s[i++]-'0');

    return ret*sig;
}

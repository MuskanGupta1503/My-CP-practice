void reverse(queue<ll>&q,int l)
{
    if(q.empty() || l==0)
    {
        return;
    }
    ll top=q.front();
    q.pop();
    reverse(q,--l);
    q.push(top);
}

queue<ll> modifyQueue(queue<ll> q, int k)
{
    //add code here.
    // for(int i=0;i<k;i++)
    // {
    //     ll top=q.front();
    //     q.pop();
    //     q.push(top);
    // }
    int Tsize=q.size();
    int l=k;
    reverse(q,l);
    int rem=Tsize-k;
    for(int i=0;i<rem;i++)
    {
        ll top=q.front();
        q.pop();
        q.push(top);
    }
    return q;
}
void linkdelete(struct Node  *head, int M, int N)
{
    if(!head)
    return;
    
    Node*ptr1=head;
    int i=1;
    while(i<M)
    {
        ptr1=ptr1->next;
        i++;
        
        if(!ptr1 )
        return;
    }
    Node*ptr2=ptr1;
    i=0;
    while(i<N)
    {
        ptr2=ptr2->next;
        i++;
        
        if(!ptr2)
        {
            ptr1->next=NULL;
            return;
        }
    }
    ptr1->next=ptr2->next;
    linkdelete(ptr2->next,M,N);
}
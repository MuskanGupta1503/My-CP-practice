Node* addOne(Node *head) 
{
    Node*revhead=reverse(head);
    Node*temp=revhead;
    Node*prev=NULL;
    int carry=1;

    while(temp)
    {
        if(carry>0)
        {
            temp->data=temp->data+carry;
            carry=(temp->data)/10;
            temp->data=(temp->data)%10;
        }
        prev=temp;
        temp=temp->next;
    }
    if(carry>0)
    {
        prev->next=new Node(1);
    }
    Node*h=reverse(revhead);
    return h;
    
}
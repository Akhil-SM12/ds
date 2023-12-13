#include<stdio.h>

struct node{
int data;
struct node *next;
}head,temp,new;

void main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    int x = 10;
    head->data =  x;
    head->next = head;
    temp = head;
    int i = 0;
    for(  i = 1 ; i <= 5 ; i++)
    {
        struct node *new = (struct node*)malloc(sizeof(struct node));
        printf("\nEnter a data : ");
        scanf("%d",&x);
        new->data = x;
        temp->next = new;
        new->next = head;               //creating a circular linked list
        temp = temp->next;
    }

    temp = head;
    while(temp->next != head)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
    printf("%d\n",temp->data);


    struct node *new = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data to be instered at the front : ");
    scanf("%d",&x);
    new->data = x;
    temp = head;
    while(temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = new;
    //head = new;
    new->next = head;



    temp = new;
    while(temp->next != new)
    {
        printf("%d\n",temp->data);                  //inserting at the front
        temp = temp->next;
    }
    printf("%d\n",temp->data);
    head = new;

    //INSERTING AT END
    struct node *new1 = (struct node*)malloc(sizeof(struct node));
     printf("\nEnter the data to be instered at the end : ");
    scanf("%d",&x);

     struct node *ptr = malloc(sizeof(struct node));
    ptr = head;
    while(ptr->next!= head)
    {
        ptr = ptr->next;
    }
    ptr->next = new1;

    new1->data = x;
    new1->next = head;
    //struct node *ptr = malloc(sizeof(struct node));
    /*ptr = head;
    while(ptr!= head)
    {
        ptr = ptr->next;
    }
    ptr->next = new1;*/
    //new1->next = head;
    struct node* temp2 = malloc(sizeof(struct node));
    temp2 = head;
    //printf("%d",head->data);
    while(temp2->next != head)
    {
        printf("%d\n",temp2->data);
        temp2 = temp2->next;
    }
    printf("%d\n",temp2->data);


    //insert at any position
    int pos , datan;
    struct node* new3 = malloc(sizeof(struct node));
    printf("\nEnter the data and the positon to be inserted : ");
    scanf("%d%d",&datan,&pos);
    new3->data = datan;
    new3->next = NULL;
    struct node* temp3 = malloc(sizeof(struct node));
    temp3= head;
    int p =0;
    for(p = 0; p < pos -1 ; p++)
    {
        temp3 = temp3->next;
    }
    new3->next = temp3->next;
    temp3->next = new3;

     temp3 = head;
    //printf("%d",head->data);
    while(temp3->next != head)
    {
        printf("%d\n",temp3->data);
        temp3 = temp3->next;
    }
    printf("%d\n",temp3->data);

    //deleting at front
    struct node* temp4 = malloc(sizeof(struct node));
    struct node* second = malloc(sizeof(struct node));
    second = head->next;

    temp4=head;
    while(temp4->next!=head)
    {
        temp4 = temp4->next;
    }
    temp4->next=second;
    second = head;

    free(head);
    //temp4->next = head->next;
    printf("%d\n",temp4->data);
    //free(temp4);



    printf("\nDeletion at front \n");


    printf("%d\n",temp4->data);
    struct node* temp5 = malloc(sizeof(struct node));
    temp5=second;
    while(temp5->next != second)
    {
        printf("%d\n",temp5->data);
        temp5 = temp5->next;
    }
    printf("%d\n",temp5->data);

}

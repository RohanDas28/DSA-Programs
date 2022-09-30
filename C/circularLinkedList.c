#include  <stdio.h>
#include <conio.h>
#include  <stdlib.h>
#define  NULL  0
struct  node
{
  int  data ;
  struct  node  *next ;
} ;

struct  node  *first=NULL ;
struct  node  *last=NULL ;
void  create()
{
  int  i , n ;
  struct  node  *pnode , *p ;

  printf("Enter the number of nodes required:\n") ;
  scanf("%d",&n) ;

  printf("Enter the data value of each node:\n") ;
  for(i=1 ; i<=n ; i++)
  {
    pnode=(struct node*)malloc(sizeof(struct node)) ;
    if(pnode==NULL)
    {
      printf("Memory overflow. Unable to create.\n") ;
      return ;
    }

    scanf("%d",&pnode->data) ;

    if(first==NULL)
	 first=last=pnode ;
    else
    {
	  last->next=pnode ;
	  last=pnode ;
    }

    last->next=first ;
  }
}
void  deletenode(int  k)
{
  struct  node  *p , *follow ;

  /* searching the required node */
  p=first ;
  follow=NULL ;
  while(follow!=last)
  {
    if(p->data==k)
	  break ;
    follow=p ;
    p=p->next ;
  }

  if(follow==last)
    printf("Required node not found.\n") ;
  else
  {
    if(p==first&&p==last)  
	  first=last=NULL ;
    else if(p==first)      
    {
      first=first->next ;
      last->next=first ;
    }
    else if(p==last)     
    {
      last=follow ;
      last->next=first ;
    }
    else	
      follow->next=p->next ;

    free(p) ;
  }
}
void  traverse()
{
  struct  node  *p , *follow ;
  if(first==NULL)
    printf("Circularly Linked List Empty") ;
  else
  {
    printf("Circularly Linked List is as shown: \n") ;

    p=first ;
    follow = NULL ;
    while(follow!=last)
    {
      printf("%d " , p->data) ;
      follow=p ;
      p=p->next ;
    }

    printf("\n") ;
  }
}

void main()
{
  int  x , k , ch ;
  clrscr() ;
  do
  {
    printf("\n Menu: \n") ;
    printf("1:Create Linked List \n") ;
    printf("2:Delete Node \n") ;
    printf("3:Traverse \n") ;
    printf("4:Exit \n") ;

    printf("\nEnter your choice: ") ;
    scanf("%d",&ch) ;

    switch(ch)
    {
      case 1:
      create() ;
      break ;

      case 2:
      printf("Enter the data value of the node to be deleted: ") ;
      scanf("%d",&k) ;
      deletenode(k) ;
      break ;

      case 3:
      traverse() ;
      break ;

      case 4:
      break ;
    }
 }
 while(ch!=4) ;

 getch() ;
}

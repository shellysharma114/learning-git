#include<stdio.h>
int main()
{
    


  int a[10],i,n,m,ch,pos;
  printf("enter the size of array:");
  scanf("%d",&n);
  printf("enter %d elements: \n",n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  
    
    printf("\n1 insert ele at the last");
    printf("\n2 delete ele at the last");
    printf("\n3 insert ele at the begining");
    printf("\n4 delete ele at the begining");
    printf("\n5 insert ele at the mid");
    printf("\n6 delete ele at the mid");
    printf("\n7 display");
    
  printf("\n enter your   choice(1-7): ");
  scanf("%d",&ch);
  
  
  switch(ch)  
  {
    case 1: if(n<10)
           {
              printf("enter the value to add:");
         scanf("%d",&m);
         a[n]=m;
         n=n+1;
         for(i=0;i<n;i++)
            printf("%d\n",a[i]);
        }
        else
        printf("you cant add ele!!");
        break;
        
    case 2: 
    
            n=n-1;
            for(i=0;i<n;i++)
            printf("%d\n",a[i]);
          break;
    case 3: if(n>10)
        printf("you cant add ele!!");
        else
        printf("enter the element to insert:");
          scanf("%d",&m);
          n=n+1;
          for(i=n;i>=0;i--)
            a[i]=a[i-1];
          a[0]=m;
          for(i=0;i<n;i++)
           printf("%d\n",a[i]);
        break;      
    case 4: 
            n=n-1;
            for(i=0;i<n;i++)
                printf("%d\n",a[i+1]);
          break;
    
    case 5:
          printf("enter the element to insert:");
          scanf("%d",&m);
          if(n<10)
          {
            printf("enter the position:\n");
            scanf("%d",&pos);
            n=n+1;
            pos=pos-1;
            for(i=n-1;i>=pos;i--)
              a[i+1]=a[i];
              a[pos]=m;
              
        }
        else
        printf("sry not inserted");
            printf("ele are\n");    
             for(i=0;i<n;i++)
            printf("%d\n",a[i]);
    case 6: printf("enter the pos to delete:");
            scanf("%d",&pos);
            if(pos>n-1)
              printf("not deleted as the pos is not valid!!"); 
            else
        {
              for(i=pos-1;i<n-1;i++)
              a[i]=a[i+1];
              
              for(i=0;i<n-1;i++)
            printf("%d\n",a[i]);
              
        }
        break;
    case 7: printf("the array is:");
          for(i=0;i<n;i++)
           printf("%d",a[i]);
          break;
     
      default: printf("invalid choice");
               break;
    }
  return 0;  
        
    
 }

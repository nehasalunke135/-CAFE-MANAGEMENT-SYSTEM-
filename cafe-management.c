#include <stdio.h>
struct restro {
    int id;
    char item_name[50];
    int cost;
};
int main() {
    struct restro B[50];
    int i,j,choice,temp,n,s;
 printf("Enter number of items: ");
scanf("%d",&n);
while (1) {
printf("\n1. Add menu \n2.Sort\n3.search\n4.Exit:");
 scanf("%d", &choice);
  switch (choice){
      case 1:
for (i = 0; i < n; i++) {
printf("\nEnter the item:");
scanf("%s",&B[i].item_name);
printf("\nEnter the id:" );
scanf("%d",&B[i].id);
printf("\nEnter the cost:");
scanf("%d",&B[i].cost);
} break;


case 2:
 for(i=0;i<n;i++){
 for (j=i+1;j<n;j++){
if (B[i].cost<B[j].cost){
temp=B[i].cost;
 B[i].cost=B[j].cost;
 B[j].cost=temp;
 } } }
 for(i=0;i<n;i++){
 printf("\nitem:%d:%s\n",i+1,B[i].item_name);
printf("\nid:%d:%d\n",i+1,B[i].id);
printf("\ncost %d:%d\n",i+1,B[i].cost);} break;

case 3:
  printf("\nenter the id of item which you want");
 scanf("%d",&s);
 for(i=0;i<n;i++){
     if(s==B[i].id){
 printf("\nitem:%s\n",B[i].item_name);
 printf("\nid:%d\n",B[i].id);
 printf("\ncost:%d\n",B[i].cost);}
    }
      break;
case 4:  
printf("\nExiting program... Thank you!\n");
return 0;
default:
printf("\nInvalid choice! Try again.\n");
      }}
  return 0;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char Name[100];
    int age;
    float marks;
    node *Next = NULL, *prve = NULL;
};

int main() {
    node *start = NULL, *Last = NULL, *freshnode;
    int num;

    printf("Enter the number of the students : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        freshnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter the Name of the Student : ");
        scanf("%c", &freshnode->Name);

        printf("Enter the Age of the student : ");
        scanf("%d", &freshnode->age);

        printf("Enter the marks percentage of the student : ");
        scanf("%f", &freshnode->marks);
        
        freshnode->Next = NULL;
        freshnode->Prev = NULL;

        if(start==NULL){
            start=freshnode;
            Last=freshnode;

        }else{
            freshnode->Prev=Last;
            Last->Next=freshnode;
            last=freshnode;

        }
    }
    temp=start;
    while(temp!=NULL){
        printf("The name of the student is %s and the age is %d",temp->Name,temp->age,temp->marks);
        temp=temp->Next;
    }
     

    return 0;
}
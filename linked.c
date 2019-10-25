#include<stdio.h>
#include<stdlib.h>
struct roll{
	int n;
	struct roll *link;
};
void printlist(struct roll *k){
	while(k!=NULL){
		printf("%d",k->n);
		k=k->link;
	}
}
int main()
{
    struct roll *r1=NULL;
    struct roll *r2=NULL;
    struct roll *r3=NULL;
    
    r1= (struct roll*)malloc(sizeof(struct roll)); 
    r2= (struct roll*)malloc(sizeof(struct roll)); 
    r3= (struct roll*)malloc(sizeof(struct roll)); 
    
    r1->n=211;
    r1->link=r2;
    r2->n=41;
    r2->link=r3;
    r3->n=439;
    r3->link=NULL;
    
    printlist(r1);
    return 0;
}
//ธีรเดช ประเสรืฐวงศ์พนา 65543206016-9 SEC 2 
//https://youtu.be/WsTvjQYZor0

#include <stdio.h>
#include <string.h>

struct godNode
{
char GODname[10];
struct godNode *next;
};

struct godNode *AddGodNode( struct godNode **walk, char newGOD[]); //prototype
void ShowAll( struct godNode *walk);//phototype
void UpdateGodNode( struct godNode **walk, char A[], char newGOD[]);//phototype
void ShowBack( struct godNode **walk);//phototype
void SwapNode( struct godNode **walk, char GOD1[], char GOD2[]);//phototype

int main()
{
 struct godNode *start;
 start = NULL;
 AddGodNode( &start, "Zeus");
 AddGodNode( &start, "Poseidon");
 AddGodNode( &start, "Thor");
 AddGodNode( &start, "Loki");ShowAll( start );
 UpdateGodNode( &start, "Poseidon","Hermes" );ShowAll( start );
 UpdateGodNode( &start, "Thor", "Apollo");ShowAll( start );
 SwapNode ( &start, "Hermes", "Apollo" );ShowAll ( start );
 ShowBack( &start );ShowAll ( start );
 return 0;
}

struct godNode *AddGodNode( struct godNode **walk, char newGOD[])

{
    while (*walk != NULL )
{
    walk = &(*walk)->next;
}
    *walk = new struct godNode;
    strcpy((*walk)->GODname,newGOD);
    (*walk)->next = NULL;
    return *walk; 
}
void ShowAll( struct godNode *walk)
{
  while(walk != NULL)
  {
    printf("%s ",walk->GODname);
    walk = walk->next;
  }  
    printf("\n");     
}

void UpdateGodNode( struct godNode **walk, char A[], char newGOD[])
{
    while (strcmp((*walk)->GODname,A) != 0)
{
    walk = &(*walk)->next;
}
    if((*walk) == NULL)
    {
       return;
    }
    strcpy((*walk)->GODname,newGOD);
}
void ShowBack( struct godNode **walk)
{
   struct godNode *preNode = NULL;
    struct godNode *currentNode = *walk;
    struct godNode *nextNode = NULL;

    while (currentNode != NULL) 
    {
        nextNode = currentNode->next;
        currentNode->next = preNode;
        preNode = currentNode;
        currentNode = nextNode;
    }
    *walk = preNode;
    while ((*walk) != NULL) 
    {
        printf("%s ", (*walk)->GODname);
        (*walk) = (*walk)->next;
    }
    printf("\n"); 
}
void SwapNode( struct godNode **walk, char GOD1[], char GOD2[])
{
    struct godNode *preGOD1 = NULL, *currGOD1 = *walk;
    while(strcmp(currGOD1->GODname, GOD1) != 0)
    {
        preGOD1 = currGOD1;
        currGOD1 = currGOD1->next;
        if( currGOD1 == NULL )
        {
            return;
        }        
    }
    struct godNode *preGOD2 = NULL, *currGOD2 = *walk;
    while(strcmp(currGOD2->GODname, GOD2) != 0)
    {
        preGOD2 = currGOD2;
        currGOD2 = currGOD2->next;
        if( currGOD2 == NULL )
        {
            return;
        }         
    }
    if (preGOD1 != NULL)
    {
        preGOD1->next = currGOD2;
    }
    else
    {
        *walk = currGOD2;  
    }
    if (preGOD2 != NULL)
    {
        preGOD2->next = currGOD1;
    }
    else
    {
        *walk = currGOD1;  
    }
    struct godNode *temp = currGOD2->next;
    currGOD2->next = currGOD1->next;
    currGOD1->next = temp;
} 

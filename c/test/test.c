#include "SqList.h"
#include "linkList.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	/*SqList test 
	SqList sq ,sq2,sq3;
	ElemType e;
	InitList_Sq(&sq);
	InitList_Sq(&sq2);
	InitList_Sq(&sq3);
	ListInsert_Sq(&sq,1,0);
	ListInsert_Sq(&sq,2,0);
	ListInsert_Sq(&sq,3,0);
	ListDelete_Sq(&sq,3,&e);

	ListInsert_Sq(&sq2,1,0);
	ListInsert_Sq(&sq2,8,0);
	ListInsert_Sq(&sq2,5,0);

	MergeList_Sq(&sq,&sq2,&sq3);
	int i=0;
	while(i<sq3.length){
		printf("%d\n",*(sq3.elem+i));
		++i;
	}
	destroyListSq(&sq);
	destroyListSq(&sq2);
	destroyListSq(&sq3);
	//end SqList test */
	//linkList test
	linkList La;
	ElemType e;
	initLinkList(&La); 
	linkListInsert(&La,1,0);
	linkListInsert(&La,4,0);
	linkListInsert(&La,6,0);
	linkListInsert(&La,8,0);
	linkListDelete(&La,4,&e);
	print(&La);
	destroylinkList(&La);
	//end linkListe test
	return 0;
}

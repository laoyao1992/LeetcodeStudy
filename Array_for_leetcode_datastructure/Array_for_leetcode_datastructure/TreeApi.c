#include "TreeApi.h"
#include <stdio.h>
#include <stdlib.h>

pTreeNode CreateTree(void) {
	/*allocate 7 nodes, return the pointer, malloc ptr is in static memomry*/
	pTreeNode pA = (pTreeNode)malloc(sizeof(TREENODE));
	pTreeNode pB = (pTreeNode)malloc(sizeof(TREENODE));
	pTreeNode pC = (pTreeNode)malloc(sizeof(TREENODE));
	pTreeNode pD = (pTreeNode)malloc(sizeof(TREENODE));
	pTreeNode pE = (pTreeNode)malloc(sizeof(TREENODE));
	pTreeNode pF = (pTreeNode)malloc(sizeof(TREENODE));
	pTreeNode pG = (pTreeNode)malloc(sizeof(TREENODE));

	pA->data = 'A';
	pB->data = 'B';
	pC->data = 'C';
	pD->data = 'D';
	pE->data = 'E';
	pF->data = 'F';
	pG->data = 'G';

	pA->left  = pB;
	pA->right = pE;
	pB->left  = pC;
	pB->right = pD;
	pC->left  = NULL;
	pC->right = NULL;
	pD->left  = NULL;
	pD->right = NULL;
	pE->left  = NULL;
	pE->right = pF;
	pF->left  = pG;
	pF->right = NULL;
	pG->left  = NULL;
	pG->right = NULL;
	return pA;
}
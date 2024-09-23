//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int aSize, bSize, mSize;
//	int* ap, * bp, * mp, * limit_a, * limit_b, * copy_a, * copy_b, * copy_m;
//
//	printf("Enter number of elements in array a.\n");
//	scanf("%d", &aSize);
//
//	ap = (int*)malloc(sizeof(int) * aSize);
//	if (ap == NULL)
//		exit(1);
//
//	printf("Enter data to be inserted in array a. It must be in sorted order.\n");
//	for (int i = 0; i < aSize; i++) {
//		scanf("%d", (ap + i));
//	}
//
//	printf("Enter number of elements in array b.\n");
//	scanf("%d", &bSize);
//
//	bp = (int*)malloc(sizeof(int) * bSize);
//	if (bp == NULL)
//		exit(1);
//
//	printf("Enter data to be inserted in array b. It must be in sorted order.\n");
//	for (int i = 0; i < bSize; i++) {
//		scanf("%d", (bp + i));
//	}
//
//
//	mSize = aSize + bSize;
//	mp = (int*)malloc(sizeof(int) * mSize);
//	if (mp == NULL)
//		exit(1);
//
//	copy_a = ap;
//	copy_b = bp;
//	copy_m = mp;
//
//	limit_a = ap + aSize;
//	limit_b = bp + bSize;
//
//	if (aSize <= bSize) {
//		for (; ap < limit_a; mp++) {
//			if (*ap <= *bp) {
//				*mp = *ap;
//				ap++;
//			}
//			else {
//				*mp = *bp;
//				bp++;
//			}
//		}
//		for (; bp < limit_b; bp++) {
//			*mp = *bp;
//			mp++;
//		}
//	}
//	else {
//		for (; bp < limit_b; mp++) {
//			if (*ap <= *bp) {
//				*mp = *ap;
//				ap++;
//			}
//			else {
//				*mp = *bp;
//				bp++;
//			}
//		}
//		for (; ap < limit_a; ap++) {
//			*mp = *ap;
//			mp++;
//		}
//	}
//헤헤헤헤헤헿
//	printf("Result of merging is, \n");
//	for (int i = 0; i < mSize; i++) {
//		printf("%d ", *(copy_m + i));
//	}
//	printf("\n");
//
//	free(copy_a);
//	free(copy_b);
//	free(copy_m);
//
//	return 0;
//}
//
//

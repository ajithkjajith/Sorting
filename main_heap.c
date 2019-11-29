//heapmain

#include<stdio.h>
#include<stdint.h>
#include "heapsort.h"
int main()
{
	// int32_t a[10]={0,30,10,20,90,15,40};
	int32_t a[10]={30,18,60,90,17,40,50};
	Heap h = heap_new(a,7);
	Heap *heap = &h;
	heap= heap_sort(heap);
	for(int i=1;i<7;i++)
	{
		printf("%d\t",heap->data[i+1]);
	}
	return 0;
}
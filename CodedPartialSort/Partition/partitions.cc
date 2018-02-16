#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <cmath>
#include <vector>
#include <fstream>

using namespace std;

typedef vector<unsigned char*> PartitionList;

int main(){

  fstream file;
 	file.open("partitions.txt",ios::out|ios::binary);
 	//fptr = fopen(,"w");

//	cout<<"K value : ";
//	cin>>K;

  //unsigned char array[10];
  long unsigned int keySize = 10;
	unsigned int K = 5001;
	long unsigned int	sizePartition = round(K/3);	
	unsigned int numPartitions = round(pow(95,10)/sizePartition);

 	long unsigned int num;
 	PartitionList* partitions;// = new PartitionList;

	for(long unsigned int i = 1; i < numPartitions; i++){
		long unsigned int bound = i * sizePartition;
		num = bound;
		unsigned char keyBuff;
		for(unsigned int j = 0; j < keySize; j++){
				long unsigned int temp = pow(95,9-j);
				int quotient = num / temp;
				int rem = num % temp;
				num = rem;
				keyBuff = quotient + 32;
				file<<keyBuff;
		}
		file<<"\n";
	}

  return 0;
} 

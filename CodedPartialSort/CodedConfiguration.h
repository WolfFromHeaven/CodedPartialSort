#ifndef _CMR_CONFIGURATION
#define _CMR_CONFIGURATION

#include "Configuration.h"

class CodedConfiguration : public Configuration {

 private:
  unsigned int load;
	unsigned int K;
  
 public:
 CodedConfiguration(): Configuration() {
    numInput = 3;    // N is assumed to be K choose r     
    numReducer = 3;  // K
    load = 2;        // r    
		K = 250;    

    inputPath = "/home/prarthana/Coded-TeraSort/Textgen/Input10000/Input1MB.txt";
		outputPath = "./Output/Output_1MB";
    partitionPath = "./Partition/Partition_1MB";
    numSamples = 10000;   
  }
  ~CodedConfiguration() {}
	
	unsigned int getK() const { return K; } 
  unsigned int getLoad() const { return load; }
	unsigned int getnumInput() const { return numInput; }
};

#endif

#include "PCMWriter.h"

#define LOGD(...) printf("Debug: %s\n", __VA_ARGS__)
#define LOGE(...) printf("Error: %s\n", __VA_ARGS__)

PCMWriter::PCMWriter()
{

}

PCMWriter::~PCMWriter()
{

}

void PCMWriter::startWrite(const char *filePath)
{
    outputFile = fopen(filePath, "wb");
    if(outputFile == NULL)
    {
        LOGE("output file is NULL");
        return;
    }
    if(provider == NULL)
    {
        LOGE("audio data provider is NULL");
        return;
    }

    
}

void PCMWriter::setDataProvider(IAudioDataProvider *provider)
{

}

void PCMWriter::removeDataProvider(){

}


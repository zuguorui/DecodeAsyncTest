#ifndef _PCM_WRITER_H_
#define _PCM_WRITER_H_

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#include "IAudioDataProvider.h"

class PCMWriter
{
public:
    PCMWriter();
    ~PCMWriter();
    void startWrite(const char *filePath);
    void setDataProvider(IAudioDataProvider *provider);
    void removeDataProvider();
private:
    IAudioDataProvider *provider = NULL;
    FILE *outputFile = NULL;
};

#endif
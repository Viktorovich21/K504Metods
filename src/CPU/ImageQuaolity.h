//
// Created by rostislav on 24.08.19.
//

#ifndef IMAGEPROCESSING_EXE_IMAGEQUAOLITY_H
#define IMAGEPROCESSING_EXE_IMAGEQUAOLITY_H

namespace ImProcessing{
    float* MSE(unsigned char* P_image, unsigned char* Q_image, int width, int height, int channels);
    float* PSNR(unsigned char* P_image, unsigned char* Q_image, int width, int height, int channels);
}

#endif //IMAGEPROCESSING_EXE_IMAGEQUAOLITY_H

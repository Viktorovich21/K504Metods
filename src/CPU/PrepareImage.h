//
// Created by rostislav on 20.07.19.
//
#include "Image.h"
#include "Matrix.h"

#ifndef IMAGEPROCCESSING_PREPAREIMAGE_H
#define IMAGEPROCCESSING_PREPAREIMAGE_H

namespace ImProcessing {
    class PrepareImage {
    public:
        PrepareImage(Image* image_);
        double* calculateCoefficient();

    private:

        double* calculateStat(double* DCT_freq, int length);

        Image* image;
        double* DCT_frequency;
        Matrix* MatrixOperation;

        // Matrix for creation DCT
        double DCT_CREATOR[8][8] = {
                {0.3536, 0.3536, 0.3536, 0.3536, 0.3536, 0.3536, 0.3536, 0.3536},
                {0.4904, 0.4157, 0.2778, 0.0975, -0.0975, -0.2778, -0.4157, -0.4904},
                {0.4619, 0.1913, -0.1913, -0.4619, -0.4619, -0.1913, 0.1913, 0.4619},
                {0.4157, -0.0975, -0.4904, -0.2778, 0.2778, 0.4904, 0.0975, -0.4157},
                {0.3536, -0.3536, -0.3536, 0.3536, 0.3536, -0.3536, -0.3536, 0.3536},
                {0.2778, -0.4904, 0.0975, 0.4157, -0.4157, -0.0975, 0.4904, -0.2778},
                {0.1913, -0.4619, 0.4619, -0.1913, -0.1913, 0.4619, -0.4619, 0.1913},
                {0.0975, -0.2778, 0.4157, -0.4904, 0.4904, -0.4157, 0.2778, -0.0975}
        };
        double DCT_CREATOR_Transpon[8][8] = {
                {0.3536, 0.4904, 0.4619, 0.4157, 0.3536, 0.2778, 0.1913, 0.0975},
                {0.3536, 0.4157, 0.1913, -0.0975, -0.3536, -0.4904, -0.4619, -0.2778},
                {0.3536, 0.2778, -0.1913, -0.4904, -0.3536, 0.0975, 0.4619, 0.4157},
                {0.3536, 0.0975, -0.4619, -0.2778, 0.3536, 0.4157, -0.1913, -0.4904},
                {0.3536, -0.0975, -0.4619, 0.2778, 0.3536, -0.4157, -0.1913, 0.4704},
                {0.3536, -0.2778, -0.1913, 0.4904, -0.3536, -0.0975, 0.4619, -0.4157},
                {0.3536, -0.4157, 0.1913, 0.0975, -0.3536, 0.4904, -0.4619, 0.2778},
                {0.3536, -0.4904, 0.4619, -0.4157, 0.3536, -0.2778, 0.1913, -0.0975}
        };
        int flags[8][8] = {
                {0,  1,  1,  1,  1,  2,  2,  2},
                {1,  1,  1,  1,  2,  2,  2,  3},
                {1,  1,  1,  2,  2,  2,  3,  3},
                {1,  1,  2,  2,  2,  3,  3,  3},
                {1,  2,  2,  2,  3,  3,  3,  4},
                {2,  2,  2,  3,  3,  3,  4,  4},
                {2,  2,  3,  3,  3,  4,  4,  4},
                {2,  3,  3,  3,  4,  4,  4,  4}
        };
    };
}

#endif //IMAGEPROCCESSING_PREPAREIMAGE_H
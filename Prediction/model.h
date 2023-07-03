#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class SVM {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        float kernels[285] = { 0 };
                        float decisions[3] = { 0 };
                        int votes[3] = { 0 };
                        kernels[0] = compute_kernel(x,   -1.81  , 1.34  , 9.66  , 0.17  , -0.01  , -0.03 );
                        kernels[1] = compute_kernel(x,   -1.4  , 0.0  , 9.91  , 0.23  , -0.02  , -0.17 );
                        kernels[2] = compute_kernel(x,   -1.86  , 0.23  , 10.23  , 0.1  , -0.08  , -0.02 );
                        kernels[3] = compute_kernel(x,   -1.5  , -0.05  , 9.87  , 0.23  , -0.02  , 0.01 );
                        kernels[4] = compute_kernel(x,   -1.32  , 0.2  , 9.87  , -0.31  , -0.0  , -0.06 );
                        kernels[5] = compute_kernel(x,   -1.89  , 1.23  , 9.93  , 0.33  , -0.01  , -0.02 );
                        kernels[6] = compute_kernel(x,   -9.9  , 0.03  , -1.41  , 0.74  , -0.9  , 0.0 );
                        kernels[7] = compute_kernel(x,   -8.66  , -0.3  , -0.74  , 0.46  , 0.03  , -0.07 );
                        kernels[8] = compute_kernel(x,   -9.26  , -0.16  , -1.59  , 0.28  , 0.08  , 0.03 );
                        kernels[9] = compute_kernel(x,   -10.57  , 0.49  , -1.53  , 0.17  , 0.03  , -0.12 );
                        kernels[10] = compute_kernel(x,   -9.12  , 0.13  , -1.73  , 0.03  , 0.06  , 0.03 );
                        kernels[11] = compute_kernel(x,   -9.6  , 0.2  , -1.74  , 0.07  , 0.03  , 0.0 );
                        kernels[12] = compute_kernel(x,   -9.4  , -0.7  , -0.92  , 0.16  , 0.0  , -0.01 );
                        kernels[13] = compute_kernel(x,   -9.58  , 0.66  , -0.75  , 0.15  , 0.01  , -0.05 );
                        kernels[14] = compute_kernel(x,   -9.12  , 0.39  , -1.78  , 0.13  , -0.08  , -0.03 );
                        kernels[15] = compute_kernel(x,   -9.26  , 0.2  , -2.83  , 0.36  , -0.08  , 0.04 );
                        kernels[16] = compute_kernel(x,   -9.72  , -0.34  , -1.09  , 0.35  , 0.07  , -0.04 );
                        kernels[17] = compute_kernel(x,   -9.89  , 0.38  , -0.05  , -0.05  , -0.03  , -0.09 );
                        kernels[18] = compute_kernel(x,   -9.54  , -0.71  , -0.96  , 0.16  , -0.01  , -0.0 );
                        kernels[19] = compute_kernel(x,   -9.42  , 0.7  , -2.7  , 0.39  , 0.03  , 0.08 );
                        kernels[20] = compute_kernel(x,   -9.74  , -0.49  , -1.06  , 0.57  , -0.03  , -0.11 );
                        kernels[21] = compute_kernel(x,   -9.09  , -0.7  , -2.55  , 0.08  , 0.09  , -0.08 );
                        kernels[22] = compute_kernel(x,   -9.61  , -0.67  , -0.88  , 0.1  , -0.02  , -0.03 );
                        kernels[23] = compute_kernel(x,   -9.46  , -0.85  , -2.27  , 0.15  , 0.08  , 0.02 );
                        kernels[24] = compute_kernel(x,   -9.62  , 0.89  , 0.13  , 0.11  , 0.04  , -0.04 );
                        kernels[25] = compute_kernel(x,   -9.93  , 0.48  , 0.16  , 0.21  , -0.06  , -0.07 );
                        kernels[26] = compute_kernel(x,   -9.58  , 0.43  , -1.74  , 0.2  , -0.09  , -0.01 );
                        kernels[27] = compute_kernel(x,   -9.45  , -0.83  , -2.83  , 0.1  , 0.05  , -0.1 );
                        kernels[28] = compute_kernel(x,   -9.43  , -1.07  , -1.98  , 0.11  , 0.03  , 0.03 );
                        kernels[29] = compute_kernel(x,   -9.56  , 0.6  , -0.82  , 0.2  , 0.01  , -0.02 );
                        kernels[30] = compute_kernel(x,   -9.31  , 0.4  , -1.52  , -0.07  , -0.02  , -0.01 );
                        kernels[31] = compute_kernel(x,   -9.48  , 0.39  , -1.79  , 0.04  , -0.0  , 0.05 );
                        kernels[32] = compute_kernel(x,   -9.55  , -0.77  , -1.05  , 0.14  , 0.07  , -0.01 );
                        kernels[33] = compute_kernel(x,   -9.64  , 0.57  , -0.97  , 0.18  , 0.04  , -0.01 );
                        kernels[34] = compute_kernel(x,   -9.16  , -1.46  , -2.09  , 0.29  , -0.08  , 0.04 );
                        kernels[35] = compute_kernel(x,   -9.48  , 0.53  , -1.85  , -0.18  , 0.44  , -0.05 );
                        kernels[36] = compute_kernel(x,   -9.11  , -0.03  , -3.23  , 0.42  , -0.05  , -0.0 );
                        kernels[37] = compute_kernel(x,   -9.33  , -0.61  , -0.71  , 0.11  , 0.02  , 0.03 );
                        kernels[38] = compute_kernel(x,   -9.69  , 0.83  , -0.29  , 0.32  , -0.05  , -0.02 );
                        kernels[39] = compute_kernel(x,   -9.11  , -0.33  , -2.98  , 0.44  , 0.1  , 0.01 );
                        kernels[40] = compute_kernel(x,   -9.52  , -0.65  , -0.85  , 0.17  , -0.0  , -0.01 );
                        kernels[41] = compute_kernel(x,   -9.08  , 0.0  , -3.0  , 0.43  , -0.13  , 0.05 );
                        kernels[42] = compute_kernel(x,   -9.59  , -0.67  , -0.82  , 0.16  , -0.03  , -0.01 );
                        kernels[43] = compute_kernel(x,   -9.08  , -1.43  , -2.61  , 0.24  , -0.09  , 0.02 );
                        kernels[44] = compute_kernel(x,   -10.19  , 0.11  , -2.08  , -0.09  , -0.34  , 0.13 );
                        kernels[45] = compute_kernel(x,   -9.82  , 0.62  , 0.17  , -0.08  , 0.06  , -0.03 );
                        kernels[46] = compute_kernel(x,   -8.88  , -0.56  , -3.5  , 0.62  , -0.37  , 0.3 );
                        kernels[47] = compute_kernel(x,   -9.73  , 0.43  , -1.63  , 0.16  , -0.15  , -0.05 );
                        kernels[48] = compute_kernel(x,   -9.23  , -1.27  , -1.98  , 0.39  , -0.05  , 0.04 );
                        kernels[49] = compute_kernel(x,   -9.32  , -1.38  , -2.04  , 0.38  , -0.08  , 0.02 );
                        kernels[50] = compute_kernel(x,   -9.37  , -0.74  , -0.79  , 0.12  , 0.07  , 0.0 );
                        kernels[51] = compute_kernel(x,   -9.22  , 0.23  , -1.71  , 0.06  , 0.08  , 0.04 );
                        kernels[52] = compute_kernel(x,   -9.37  , 0.79  , -2.71  , 0.54  , 0.02  , 0.3 );
                        kernels[53] = compute_kernel(x,   -9.03  , 0.18  , -1.94  , -0.07  , -0.05  , 0.06 );
                        kernels[54] = compute_kernel(x,   -9.45  , -1.11  , -1.96  , 0.29  , 0.05  , 0.07 );
                        kernels[55] = compute_kernel(x,   -9.21  , 0.77  , 0.25  , 0.02  , 0.04  , -0.09 );
                        kernels[56] = compute_kernel(x,   -9.61  , -0.6  , -0.8  , 0.18  , -0.01  , -0.01 );
                        kernels[57] = compute_kernel(x,   -8.9  , -0.05  , -3.29  , 0.31  , -0.02  , 0.01 );
                        kernels[58] = compute_kernel(x,   -11.53  , -1.03  , -5.48  , 0.98  , -0.3  , -0.13 );
                        kernels[59] = compute_kernel(x,   -8.0  , 0.48  , 0.34  , 0.2  , -0.16  , 0.09 );
                        kernels[60] = compute_kernel(x,   -8.71  , -0.23  , -2.11  , 0.62  , 0.09  , -0.16 );
                        kernels[61] = compute_kernel(x,   -9.16  , -0.33  , -2.23  , 0.91  , 0.34  , -0.11 );
                        kernels[62] = compute_kernel(x,   -13.86  , 0.01  , 0.46  , -0.24  , 0.37  , -0.09 );
                        kernels[63] = compute_kernel(x,   -6.52  , 2.93  , 0.65  , -0.84  , -0.07  , 0.51 );
                        kernels[64] = compute_kernel(x,   -8.41  , -2.25  , -3.61  , 0.89  , 0.48  , 0.06 );
                        kernels[65] = compute_kernel(x,   -4.87  , -0.53  , -0.62  , 0.2  , -0.18  , 0.05 );
                        kernels[66] = compute_kernel(x,   -8.82  , 1.32  , -2.3  , -2.05  , -1.31  , 0.01 );
                        kernels[67] = compute_kernel(x,   -11.09  , -1.35  , -2.49  , 2.49  , 0.37  , 0.22 );
                        kernels[68] = compute_kernel(x,   -9.74  , -0.85  , 1.23  , 0.5  , 0.32  , -0.48 );
                        kernels[69] = compute_kernel(x,   -7.41  , 0.61  , -6.04  , 0.69  , 0.2  , -0.53 );
                        kernels[70] = compute_kernel(x,   -11.02  , 1.29  , -1.74  , -0.72  , -2.13  , 0.2 );
                        kernels[71] = compute_kernel(x,   -9.83  , 0.23  , 1.18  , 0.63  , 0.46  , -0.16 );
                        kernels[72] = compute_kernel(x,   -8.18  , -0.53  , -4.75  , 1.06  , -0.03  , 0.13 );
                        kernels[73] = compute_kernel(x,   -8.01  , 0.08  , -3.32  , 0.67  , 1.4  , 0.31 );
                        kernels[74] = compute_kernel(x,   -10.3  , 1.57  , 2.58  , -0.21  , 0.57  , 0.17 );
                        kernels[75] = compute_kernel(x,   -6.96  , 2.21  , -3.3  , -0.04  , 0.58  , -0.09 );
                        kernels[76] = compute_kernel(x,   -9.72  , -1.54  , -1.92  , 2.64  , 0.11  , 0.36 );
                        kernels[77] = compute_kernel(x,   -8.36  , -0.29  , 0.53  , -1.69  , 0.01  , 0.32 );
                        kernels[78] = compute_kernel(x,   -9.61  , -0.52  , -0.59  , 0.52  , 0.47  , -0.02 );
                        kernels[79] = compute_kernel(x,   -8.99  , -0.64  , -2.29  , 2.48  , -0.07  , 0.54 );
                        kernels[80] = compute_kernel(x,   -9.72  , -0.14  , -2.99  , 1.43  , -0.03  , 0.38 );
                        kernels[81] = compute_kernel(x,   -5.98  , 1.27  , 0.79  , 1.35  , -0.27  , -0.16 );
                        kernels[82] = compute_kernel(x,   -8.06  , -1.68  , -1.38  , 2.12  , 0.08  , 0.32 );
                        kernels[83] = compute_kernel(x,   -9.52  , 0.39  , -0.55  , 1.0  , -1.42  , -0.28 );
                        kernels[84] = compute_kernel(x,   -9.37  , -0.68  , -0.98  , 0.09  , 0.59  , 0.27 );
                        kernels[85] = compute_kernel(x,   -6.57  , 0.71  , -2.73  , -0.67  , 0.09  , -0.28 );
                        kernels[86] = compute_kernel(x,   -9.32  , -1.1  , -1.26  , -1.52  , -0.27  , -0.48 );
                        kernels[87] = compute_kernel(x,   -9.27  , 0.98  , -0.45  , 1.15  , 0.82  , 0.59 );
                        kernels[88] = compute_kernel(x,   -9.49  , 1.05  , -1.01  , -0.78  , 0.03  , -0.34 );
                        kernels[89] = compute_kernel(x,   -9.51  , 0.24  , -1.91  , 0.72  , 0.36  , 0.05 );
                        kernels[90] = compute_kernel(x,   -9.68  , -1.55  , -2.23  , -0.95  , 0.71  , -0.3 );
                        kernels[91] = compute_kernel(x,   -11.27  , 1.07  , -2.55  , 1.02  , 0.78  , 0.3 );
                        kernels[92] = compute_kernel(x,   -9.62  , 0.78  , -4.05  , -1.68  , 0.04  , -0.33 );
                        kernels[93] = compute_kernel(x,   -12.05  , 0.03  , 0.9  , 0.66  , -0.28  , 0.06 );
                        kernels[94] = compute_kernel(x,   -8.74  , 1.34  , 5.3  , -0.96  , 0.44  , 0.61 );
                        kernels[95] = compute_kernel(x,   -11.1  , -0.92  , -2.35  , 0.12  , -0.16  , -1.4 );
                        kernels[96] = compute_kernel(x,   -10.46  , 1.63  , -4.47  , -2.9  , -0.66  , -1.1 );
                        kernels[97] = compute_kernel(x,   -10.63  , -0.76  , 0.41  , 1.22  , -0.22  , 0.07 );
                        kernels[98] = compute_kernel(x,   -9.82  , 0.81  , -3.58  , 0.1  , -2.28  , 0.7 );
                        kernels[99] = compute_kernel(x,   -9.57  , -1.16  , -2.03  , 0.41  , 0.01  , -0.34 );
                        kernels[100] = compute_kernel(x,   -8.98  , 0.9  , -3.86  , 0.71  , -0.1  , 0.88 );
                        kernels[101] = compute_kernel(x,   -10.07  , 1.06  , 1.74  , -1.52  , 0.19  , -0.38 );
                        kernels[102] = compute_kernel(x,   -8.03  , -0.02  , 0.4  , 0.62  , -0.92  , -0.23 );
                        kernels[103] = compute_kernel(x,   -9.17  , 2.27  , 0.27  , -0.13  , -2.62  , -0.08 );
                        kernels[104] = compute_kernel(x,   -6.18  , -1.42  , -1.46  , -0.45  , 0.17  , -0.04 );
                        kernels[105] = compute_kernel(x,   -9.3  , -0.27  , -2.02  , -0.18  , 0.58  , -0.11 );
                        kernels[106] = compute_kernel(x,   -9.14  , -0.21  , -1.39  , -0.52  , -0.05  , -0.03 );
                        kernels[107] = compute_kernel(x,   -9.36  , 0.25  , -3.69  , 0.31  , 0.26  , 0.21 );
                        kernels[108] = compute_kernel(x,   -10.81  , -1.33  , -1.66  , 1.13  , -0.35  , 0.44 );
                        kernels[109] = compute_kernel(x,   -9.98  , 1.32  , -3.72  , -3.28  , 0.43  , -0.27 );
                        kernels[110] = compute_kernel(x,   -11.72  , -0.8  , -3.14  , 1.02  , 0.14  , 0.38 );
                        kernels[111] = compute_kernel(x,   -10.51  , 2.31  , -1.26  , -0.43  , -2.3  , 0.03 );
                        kernels[112] = compute_kernel(x,   -10.86  , -0.75  , -1.87  , -1.65  , 0.8  , -0.52 );
                        kernels[113] = compute_kernel(x,   -9.07  , 1.81  , -1.36  , 0.01  , 0.47  , -0.29 );
                        kernels[114] = compute_kernel(x,   -13.31  , -1.05  , -1.67  , 0.23  , -0.29  , 0.13 );
                        kernels[115] = compute_kernel(x,   -9.81  , -0.82  , 3.37  , 1.18  , 0.79  , -0.06 );
                        kernels[116] = compute_kernel(x,   -12.53  , -1.98  , -3.65  , -1.46  , -0.26  , -0.08 );
                        kernels[117] = compute_kernel(x,   -9.85  , -0.16  , 0.03  , 0.36  , 0.54  , 0.27 );
                        kernels[118] = compute_kernel(x,   -6.82  , 1.12  , 1.58  , 0.28  , -0.01  , 0.46 );
                        kernels[119] = compute_kernel(x,   -6.64  , 2.31  , 1.17  , 0.75  , 0.4  , -0.04 );
                        kernels[120] = compute_kernel(x,   -7.83  , -0.17  , 0.03  , 0.39  , -0.84  , -0.09 );
                        kernels[121] = compute_kernel(x,   -9.58  , -0.02  , -0.78  , 0.2  , -0.44  , -0.03 );
                        kernels[122] = compute_kernel(x,   -9.47  , -0.25  , -0.66  , 0.56  , 0.52  , 0.13 );
                        kernels[123] = compute_kernel(x,   -6.12  , -0.04  , 1.72  , 0.17  , 0.09  , -0.07 );
                        kernels[124] = compute_kernel(x,   -6.58  , -0.97  , -1.75  , 1.51  , 0.36  , 0.34 );
                        kernels[125] = compute_kernel(x,   -11.28  , 0.34  , -1.45  , -1.15  , 1.1  , 0.5 );
                        kernels[126] = compute_kernel(x,   -8.36  , -0.84  , -2.31  , 0.7  , 0.16  , -0.13 );
                        kernels[127] = compute_kernel(x,   -12.41  , 0.83  , -0.85  , 2.5  , -0.02  , 0.16 );
                        kernels[128] = compute_kernel(x,   -8.78  , 0.7  , -2.28  , 0.09  , 0.21  , 0.2 );
                        kernels[129] = compute_kernel(x,   -8.43  , 0.1  , -1.17  , 1.78  , 0.62  , 0.07 );
                        kernels[130] = compute_kernel(x,   -6.3  , 0.8  , -0.3  , 2.62  , -1.17  , -0.28 );
                        kernels[131] = compute_kernel(x,   -10.26  , -2.12  , -0.96  , -0.7  , -0.45  , -0.19 );
                        kernels[132] = compute_kernel(x,   -12.24  , -1.0  , 3.39  , -1.39  , 0.28  , -0.51 );
                        kernels[133] = compute_kernel(x,   -8.71  , 3.02  , -0.72  , 1.43  , -3.39  , 0.64 );
                        kernels[134] = compute_kernel(x,   -12.79  , -2.78  , -3.19  , 0.16  , 0.28  , 0.12 );
                        kernels[135] = compute_kernel(x,   -9.54  , 0.45  , -1.41  , 0.22  , -2.35  , 0.34 );
                        kernels[136] = compute_kernel(x,   -9.54  , -1.24  , -1.19  , -0.19  , -0.26  , 0.07 );
                        kernels[137] = compute_kernel(x,   -11.26  , -2.33  , -1.37  , 0.25  , 0.36  , -0.19 );
                        kernels[138] = compute_kernel(x,   -9.73  , -1.27  , -1.25  , 0.59  , -0.33  , 0.0 );
                        kernels[139] = compute_kernel(x,   -9.62  , 0.61  , -2.75  , 0.28  , 1.18  , -0.39 );
                        kernels[140] = compute_kernel(x,   -14.06  , -1.16  , -4.75  , 0.07  , -0.53  , -0.08 );
                        kernels[141] = compute_kernel(x,   -12.32  , -3.08  , 0.34  , -0.19  , -0.13  , 0.04 );
                        kernels[142] = compute_kernel(x,   -10.38  , 0.13  , -1.94  , -3.17  , 0.1  , -0.22 );
                        kernels[143] = compute_kernel(x,   -10.18  , 0.45  , -0.36  , -0.25  , -1.28  , -0.83 );
                        kernels[144] = compute_kernel(x,   -10.42  , -3.32  , -4.38  , 2.42  , 0.43  , 0.34 );
                        kernels[145] = compute_kernel(x,   -5.73  , 0.18  , -3.65  , 1.0  , 1.29  , -0.18 );
                        kernels[146] = compute_kernel(x,   -12.36  , -0.56  , -2.14  , 0.66  , 0.19  , 0.5 );
                        kernels[147] = compute_kernel(x,   -9.33  , -1.45  , 0.43  , -1.32  , -0.39  , -0.02 );
                        kernels[148] = compute_kernel(x,   -9.52  , 2.94  , 0.82  , 0.09  , 0.56  , -0.33 );
                        kernels[149] = compute_kernel(x,   -9.2  , -0.78  , -2.23  , -0.65  , 0.14  , -0.07 );
                        kernels[150] = compute_kernel(x,   -9.72  , -2.23  , -1.36  , 0.55  , -0.01  , -0.2 );
                        kernels[151] = compute_kernel(x,   -10.59  , -0.01  , -0.69  , 0.47  , -0.15  , 0.05 );
                        kernels[152] = compute_kernel(x,   -9.09  , 0.02  , -2.08  , 0.79  , 0.18  , 0.06 );
                        kernels[153] = compute_kernel(x,   -8.5  , 3.33  , -3.72  , -1.15  , -1.62  , -0.31 );
                        kernels[154] = compute_kernel(x,   -13.21  , 1.23  , -2.32  , -1.31  , 0.04  , -0.38 );
                        kernels[155] = compute_kernel(x,   -9.43  , 0.23  , -2.33  , -0.27  , 0.25  , 0.23 );
                        kernels[156] = compute_kernel(x,   -9.88  , -0.45  , -0.22  , -0.39  , 0.51  , 0.09 );
                        kernels[157] = compute_kernel(x,   -9.54  , -0.17  , -3.04  , -0.51  , 0.12  , 0.25 );
                        kernels[158] = compute_kernel(x,   -11.04  , 0.89  , 2.09  , 0.51  , 0.31  , -0.37 );
                        kernels[159] = compute_kernel(x,   -12.39  , 3.23  , -4.11  , -0.74  , 0.47  , -0.28 );
                        kernels[160] = compute_kernel(x,   -5.84  , 1.41  , -1.65  , 1.39  , 0.6  , 0.29 );
                        kernels[161] = compute_kernel(x,   -7.87  , 1.15  , 0.28  , 1.49  , 0.17  , -0.46 );
                        kernels[162] = compute_kernel(x,   -7.68  , 2.76  , -2.19  , -0.38  , -2.59  , 0.2 );
                        kernels[163] = compute_kernel(x,   -7.56  , -1.32  , -3.13  , -2.22  , 1.62  , 0.19 );
                        kernels[164] = compute_kernel(x,   -9.16  , -0.84  , -0.89  , -0.27  , 0.56  , -0.33 );
                        kernels[165] = compute_kernel(x,   -10.15  , 1.48  , -2.11  , 1.05  , -0.45  , 0.24 );
                        kernels[166] = compute_kernel(x,   -9.87  , -0.19  , 4.86  , -1.36  , 0.66  , 0.1 );
                        kernels[167] = compute_kernel(x,   -10.33  , 0.43  , -1.25  , 0.37  , 0.1  , -0.1 );
                        kernels[168] = compute_kernel(x,   -8.96  , 0.9  , -1.76  , -0.15  , -0.03  , -0.15 );
                        kernels[169] = compute_kernel(x,   -10.82  , 0.04  , -2.97  , -0.83  , 1.12  , -0.4 );
                        kernels[170] = compute_kernel(x,   -6.51  , 2.43  , -0.33  , 0.09  , -0.78  , 0.24 );
                        kernels[171] = compute_kernel(x,   -9.86  , 0.43  , -0.87  , 1.13  , 0.91  , 0.35 );
                        kernels[172] = compute_kernel(x,   -6.93  , 1.57  , 1.2  , -0.81  , 0.66  , 0.24 );
                        kernels[173] = compute_kernel(x,   -8.74  , -0.98  , -1.18  , 1.03  , 1.13  , 0.36 );
                        kernels[174] = compute_kernel(x,   -8.44  , 0.79  , -2.54  , 1.73  , -0.43  , 0.41 );
                        kernels[175] = compute_kernel(x,   -6.81  , -1.63  , -0.01  , -1.86  , 0.07  , -0.47 );
                        kernels[176] = compute_kernel(x,   -10.51  , 1.35  , -4.56  , 1.05  , 0.0  , -0.31 );
                        kernels[177] = compute_kernel(x,   -12.49  , 0.8  , -3.95  , -0.14  , -0.13  , -0.02 );
                        kernels[178] = compute_kernel(x,   -9.73  , 1.21  , -1.42  , 0.63  , 0.04  , -0.15 );
                        kernels[179] = compute_kernel(x,   -11.97  , 0.19  , -2.38  , -1.07  , 1.06  , 0.49 );
                        kernels[180] = compute_kernel(x,   -11.11  , 3.52  , -1.28  , -0.97  , 1.71  , 0.11 );
                        kernels[181] = compute_kernel(x,   -12.54  , 0.63  , -0.12  , -0.64  , 0.63  , -0.07 );
                        kernels[182] = compute_kernel(x,   -9.42  , -0.61  , -3.1  , -0.36  , 0.22  , 0.09 );
                        kernels[183] = compute_kernel(x,   -12.58  , -2.23  , -0.52  , -0.57  , 0.54  , -0.13 );
                        kernels[184] = compute_kernel(x,   -9.81  , 0.39  , 3.08  , 1.39  , 0.43  , -0.18 );
                        kernels[185] = compute_kernel(x,   -12.49  , 2.48  , -4.86  , -1.14  , -0.09  , -0.21 );
                        kernels[186] = compute_kernel(x,   -8.72  , 0.99  , -3.83  , -0.16  , 0.71  , 0.34 );
                        kernels[187] = compute_kernel(x,   -10.31  , -0.1  , -2.76  , 0.41  , -0.1  , -0.11 );
                        kernels[188] = compute_kernel(x,   -4.97  , -0.65  , -1.16  , 0.22  , 0.01  , -0.19 );
                        kernels[189] = compute_kernel(x,   -8.2  , 0.09  , 2.96  , 0.26  , 0.2  , 0.24 );
                        kernels[190] = compute_kernel(x,   -10.26  , -0.49  , -1.44  , 0.07  , -0.15  , 0.35 );
                        kernels[191] = compute_kernel(x,   -9.97  , -1.96  , -3.52  , 2.4  , 0.3  , 0.37 );
                        kernels[192] = compute_kernel(x,   -11.43  , 1.81  , -0.59  , 1.61  , -0.05  , 0.54 );
                        kernels[193] = compute_kernel(x,   -12.0  , -1.68  , -1.42  , -1.17  , 0.68  , -0.2 );
                        kernels[194] = compute_kernel(x,   -11.75  , 0.4  , 0.29  , -1.03  , -0.48  , -0.28 );
                        kernels[195] = compute_kernel(x,   -9.93  , 1.18  , -1.63  , -0.3  , 0.2  , -0.15 );
                        kernels[196] = compute_kernel(x,   -8.53  , -0.03  , 4.06  , -0.1  , 0.35  , 0.33 );
                        kernels[197] = compute_kernel(x,   -9.4  , 0.04  , -0.67  , 0.04  , 0.55  , 0.06 );
                        kernels[198] = compute_kernel(x,   -8.71  , 0.26  , 2.49  , -1.44  , 0.77  , 0.34 );
                        kernels[199] = compute_kernel(x,   -12.28  , -0.9  , -0.93  , -0.48  , -0.94  , -0.28 );
                        kernels[200] = compute_kernel(x,   -10.68  , 0.91  , -2.41  , -2.15  , -0.98  , -0.42 );
                        kernels[201] = compute_kernel(x,   -8.54  , -1.36  , -4.33  , 0.03  , -0.37  , -0.04 );
                        kernels[202] = compute_kernel(x,   -8.9  , -0.67  , -1.26  , 1.15  , 0.03  , 0.06 );
                        kernels[203] = compute_kernel(x,   -9.52  , 0.06  , -1.19  , 0.82  , -0.02  , 0.08 );
                        kernels[204] = compute_kernel(x,   -8.92  , -1.38  , -3.02  , -1.24  , 1.11  , 0.24 );
                        kernels[205] = compute_kernel(x,   -11.72  , -0.1  , 4.3  , 0.66  , 0.22  , -0.03 );
                        kernels[206] = compute_kernel(x,   -9.73  , -0.66  , -1.57  , 0.33  , -0.12  , 0.02 );
                        kernels[207] = compute_kernel(x,   -9.63  , 0.61  , -1.34  , 0.41  , 0.1  , -0.35 );
                        kernels[208] = compute_kernel(x,   -11.41  , -1.59  , -0.02  , 0.88  , -0.22  , -0.05 );
                        kernels[209] = compute_kernel(x,   -9.1  , 0.57  , -2.81  , 0.06  , 0.45  , 0.26 );
                        kernels[210] = compute_kernel(x,   -9.96  , 0.52  , -0.72  , -0.55  , -1.04  , -0.82 );
                        kernels[211] = compute_kernel(x,   -9.29  , 1.89  , -0.2  , 1.07  , 0.88  , 0.12 );
                        kernels[212] = compute_kernel(x,   -10.69  , 2.17  , -1.4  , -1.61  , -1.36  , -0.62 );
                        kernels[213] = compute_kernel(x,   -12.05  , 0.64  , 0.03  , 1.16  , 0.54  , 0.17 );
                        kernels[214] = compute_kernel(x,   -8.61  , -1.43  , 3.47  , -0.61  , 0.62  , 0.06 );
                        kernels[215] = compute_kernel(x,   -10.79  , -0.81  , 1.91  , -0.47  , 0.58  , -0.08 );
                        kernels[216] = compute_kernel(x,   -7.38  , 0.85  , 0.87  , 2.96  , -1.01  , -0.17 );
                        kernels[217] = compute_kernel(x,   -9.35  , -0.19  , -2.26  , -0.32  , 0.43  , 0.01 );
                        kernels[218] = compute_kernel(x,   -8.85  , 0.23  , -3.3  , -0.43  , -1.69  , 0.1 );
                        kernels[219] = compute_kernel(x,   -8.4  , -0.33  , -0.24  , -0.54  , -0.39  , -0.11 );
                        kernels[220] = compute_kernel(x,   -13.69  , -1.5  , -0.36  , -0.77  , -0.36  , -0.23 );
                        kernels[221] = compute_kernel(x,   -10.24  , -0.24  , 0.03  , 0.23  , 0.54  , -0.02 );
                        kernels[222] = compute_kernel(x,   -9.86  , 1.14  , -0.1  , 0.16  , -0.25  , -0.01 );
                        kernels[223] = compute_kernel(x,   -10.78  , 3.01  , -0.37  , 0.56  , 0.25  , 0.53 );
                        kernels[224] = compute_kernel(x,   -7.34  , -1.29  , 0.1  , 0.18  , -0.02  , -0.01 );
                        kernels[225] = compute_kernel(x,   -8.99  , 1.24  , -1.71  , 2.69  , -1.36  , -0.97 );
                        kernels[226] = compute_kernel(x,   -9.14  , 1.1  , -1.19  , 1.72  , -2.4  , 1.0 );
                        kernels[227] = compute_kernel(x,   -9.11  , 0.58  , -3.44  , 0.49  , -0.12  , -0.13 );
                        kernels[228] = compute_kernel(x,   -9.2  , 0.06  , -0.45  , -0.59  , -0.29  , 0.42 );
                        kernels[229] = compute_kernel(x,   -7.63  , 1.92  , -2.56  , 0.25  , -0.37  , 0.73 );
                        kernels[230] = compute_kernel(x,   -7.56  , 0.61  , -0.8  , -0.98  , 1.19  , -0.11 );
                        kernels[231] = compute_kernel(x,   -8.6  , 1.02  , -2.18  , 0.8  , -2.17  , 0.02 );
                        kernels[232] = compute_kernel(x,   -10.52  , 0.99  , -0.72  , 0.43  , -0.36  , 0.1 );
                        kernels[233] = compute_kernel(x,   -9.54  , -0.3  , -1.29  , -0.13  , 0.52  , 0.07 );
                        kernels[234] = compute_kernel(x,   -8.77  , 0.45  , 0.38  , -0.55  , 0.48  , 0.59 );
                        kernels[235] = compute_kernel(x,   -14.38  , -1.64  , -2.34  , -0.58  , -0.18  , -0.28 );
                        kernels[236] = compute_kernel(x,   -11.55  , -2.08  , -1.93  , -0.33  , -0.61  , -0.65 );
                        kernels[237] = compute_kernel(x,   -11.91  , 0.51  , -1.75  , -1.25  , 0.0  , -1.33 );
                        kernels[238] = compute_kernel(x,   -8.91  , 0.17  , -1.11  , 0.08  , -0.06  , 0.16 );
                        kernels[239] = compute_kernel(x,   -7.09  , 0.38  , -1.68  , 2.02  , -0.26  , 0.3 );
                        kernels[240] = compute_kernel(x,   -10.24  , 0.37  , -2.42  , 1.37  , -0.97  , -0.96 );
                        kernels[241] = compute_kernel(x,   -7.65  , 2.78  , -1.36  , 0.03  , 0.22  , 0.33 );
                        kernels[242] = compute_kernel(x,   -10.61  , -2.15  , -3.85  , 1.01  , -0.2  , 0.05 );
                        kernels[243] = compute_kernel(x,   -9.98  , 0.96  , -1.72  , 0.54  , -0.03  , 0.05 );
                        kernels[244] = compute_kernel(x,   -8.65  , 0.48  , -1.08  , 2.57  , -1.21  , -0.25 );
                        kernels[245] = compute_kernel(x,   -9.53  , -0.54  , -1.81  , 0.1  , 0.98  , 0.38 );
                        kernels[246] = compute_kernel(x,   -9.29  , 4.09  , 0.48  , -1.84  , -0.06  , -0.94 );
                        kernels[247] = compute_kernel(x,   -6.29  , 0.1  , -2.93  , 0.14  , 0.19  , 0.03 );
                        kernels[248] = compute_kernel(x,   -10.13  , 0.0  , -2.78  , -0.37  , -0.73  , -0.85 );
                        kernels[249] = compute_kernel(x,   -7.61  , 1.35  , -0.44  , 0.54  , -1.06  , 0.22 );
                        kernels[250] = compute_kernel(x,   -10.06  , -1.22  , -1.31  , -0.08  , -0.15  , -0.01 );
                        kernels[251] = compute_kernel(x,   -9.57  , 1.0  , -1.36  , -3.07  , -0.14  , -0.69 );
                        kernels[252] = compute_kernel(x,   -10.05  , 1.53  , -1.79  , -1.19  , 0.35  , -0.58 );
                        kernels[253] = compute_kernel(x,   -9.08  , 0.99  , -2.31  , 0.39  , 0.27  , 0.16 );
                        kernels[254] = compute_kernel(x,   -10.34  , -0.4  , 4.62  , -2.08  , 1.18  , -0.27 );
                        kernels[255] = compute_kernel(x,   -9.21  , -1.04  , -1.57  , -0.64  , -0.07  , -0.08 );
                        kernels[256] = compute_kernel(x,   -5.49  , -0.41  , -1.42  , -0.92  , -0.21  , -0.28 );
                        kernels[257] = compute_kernel(x,   -9.67  , 0.52  , -1.33  , 0.62  , 0.09  , -0.07 );
                        kernels[258] = compute_kernel(x,   -5.4  , -1.19  , 0.17  , -0.05  , 0.02  , -0.05 );
                        kernels[259] = compute_kernel(x,   -7.65  , -2.09  , -3.13  , -0.89  , 1.43  , 0.13 );
                        kernels[260] = compute_kernel(x,   -13.69  , -0.68  , -2.23  , -1.54  , -0.93  , -0.13 );
                        kernels[261] = compute_kernel(x,   -9.87  , 0.64  , -2.28  , 1.99  , -0.14  , 0.28 );
                        kernels[262] = compute_kernel(x,   -9.98  , -2.51  , 0.79  , 0.71  , -0.25  , 0.11 );
                        kernels[263] = compute_kernel(x,   -6.96  , -1.86  , -0.02  , 1.68  , 0.08  , 0.39 );
                        kernels[264] = compute_kernel(x,   -7.92  , -2.01  , -0.57  , 1.97  , 0.23  , 0.28 );
                        kernels[265] = compute_kernel(x,   -7.75  , -0.23  , -0.4  , -1.56  , 0.13  , -0.59 );
                        kernels[266] = compute_kernel(x,   -13.68  , 0.91  , -2.44  , -1.42  , -0.5  , -0.6 );
                        kernels[267] = compute_kernel(x,   -7.71  , 0.04  , -0.01  , 2.46  , -1.16  , -0.04 );
                        kernels[268] = compute_kernel(x,   -11.52  , 1.77  , -1.6  , -0.31  , 0.94  , 0.36 );
                        kernels[269] = compute_kernel(x,   -8.61  , -0.12  , -2.8  , 0.34  , -0.31  , 0.07 );
                        kernels[270] = compute_kernel(x,   -7.74  , 2.63  , -1.25  , -1.39  , 0.44  , -0.1 );
                        kernels[271] = compute_kernel(x,   -9.09  , 0.0  , -1.32  , -0.22  , 0.29  , 0.06 );
                        kernels[272] = compute_kernel(x,   -12.45  , 0.19  , -2.1  , 0.38  , -0.79  , 0.05 );
                        kernels[273] = compute_kernel(x,   -7.38  , 0.24  , -2.65  , -1.61  , 0.22  , -0.19 );
                        kernels[274] = compute_kernel(x,   -8.83  , 1.27  , 3.38  , 2.16  , 0.03  , -0.03 );
                        kernels[275] = compute_kernel(x,   -10.16  , 0.42  , -1.43  , -0.32  , 0.45  , 0.08 );
                        kernels[276] = compute_kernel(x,   -8.52  , -2.01  , -0.0  , 0.66  , 0.07  , -0.18 );
                        kernels[277] = compute_kernel(x,   -11.79  , 2.88  , 0.43  , 0.47  , 0.77  , -0.07 );
                        kernels[278] = compute_kernel(x,   -10.52  , 0.48  , -0.15  , -0.28  , -0.31  , -0.1 );
                        kernels[279] = compute_kernel(x,   -9.26  , 1.51  , -0.62  , -2.55  , 0.18  , -0.49 );
                        kernels[280] = compute_kernel(x,   -9.9  , 1.09  , 0.55  , 1.37  , 0.57  , -0.37 );
                        kernels[281] = compute_kernel(x,   -7.96  , 1.35  , 1.15  , -1.33  , 0.9  , 0.5 );
                        kernels[282] = compute_kernel(x,   -9.02  , -2.44  , -0.37  , 0.31  , 0.14  , 0.48 );
                        kernels[283] = compute_kernel(x,   -9.74  , -1.32  , -2.03  , 0.38  , 0.03  , 0.13 );
                        kernels[284] = compute_kernel(x,   -7.61  , -0.31  , 2.61  , -0.59  , 0.18  , 0.33 );
                        decisions[0] = -0.437567075552
                        + kernels[0] * 0.927676011449
                        + kernels[1] * 0.109981009709
                        + kernels[2] * 0.121649870846
                        + kernels[3] * 0.514308924885
                        + kernels[4] * 0.357773415035
                        + kernels[6] * -0.147686805574
                        + kernels[7] * -0.203168806271
                        + kernels[9] * -0.256792376261
                        + kernels[25] * -0.079533818484
                        + kernels[34] * -0.25101729426
                        + kernels[35] * -0.034817999805
                        + kernels[43] * -0.075453406548
                        + kernels[45] * -0.067458856878
                        + kernels[46] * -0.337767582001
                        + kernels[50] * -0.016625107268
                        + kernels[52] * -0.260024959361
                        + kernels[55] * -0.301042219212
                        ;
                        decisions[1] = -0.954150228409
                        + kernels[0]
                        + kernels[1] * 0.090999458318
                        + kernels[2] * 0.093400695723
                        + kernels[3] * 0.756244547124
                        + kernels[4] * 0.542098059915
                        + kernels[5] * 0.265245923657
                        + kernels[58] * -0.03693515009
                        + kernels[62] * -0.031231689525
                        + kernels[63] * -0.026992572216
                        + kernels[64] * -0.023381533506
                        + kernels[65] * -0.015844369763
                        + kernels[66] * -0.020713441444
                        + kernels[67] * -0.023875724983
                        + kernels[68] * -0.008891901693
                        + kernels[69] * -0.040081903568
                        + kernels[70] * -0.016095813824
                        + kernels[72] * -0.015241281242
                        + kernels[73] * -0.016467659967
                        + kernels[74] * -0.021098836739
                        + kernels[75] * -0.026595444535
                        + kernels[76] * -0.014775526901
                        + kernels[77] * -0.012996118684
                        + kernels[79] * -0.014563788061
                        + kernels[81] * -0.012551241545
                        + kernels[82] * -0.005026514316
                        + kernels[83] * -0.002193659477
                        + kernels[85] * -0.008750133252
                        + kernels[86] * -0.013376049854
                        + kernels[87] * -0.013841277967
                        + kernels[90] * -0.011702874054
                        + kernels[91] * -0.01616257917
                        + kernels[92] * -0.017085495022
                        + kernels[93] * -0.015177507633
                        + kernels[94] * -0.040325736383
                        + kernels[95] * -0.018051580033
                        + kernels[96] * -0.032203453906
                        + kernels[97] * -0.009563601022
                        + kernels[98] * -0.028433525599
                        + kernels[100] * -0.013010558428
                        + kernels[101] * -0.022039843136
                        + kernels[102] * -0.015328177807
                        + kernels[103] * -0.031977808472
                        + kernels[104] * -0.010594304476
                        + kernels[108] * -0.004198025702
                        + kernels[109] * -0.023705764753
                        + kernels[110] * -0.003957708305
                        + kernels[111] * -0.014446538532
                        + kernels[112] * -0.002724056073
                        + kernels[113] * -0.006834867031
                        + kernels[114] * -0.002926404784
                        + kernels[115] * -0.027203749042
                        + kernels[116] * -0.027928755807
                        + kernels[118] * -0.001254312524
                        + kernels[119] * -0.021543648659
                        + kernels[120] * -0.001714796149
                        + kernels[123] * -0.028265991883
                        + kernels[124] * -0.017602442459
                        + kernels[125] * -0.013920546994
                        + kernels[127] * -0.034470848939
                        + kernels[129] * -0.00074695022
                        + kernels[130] * -0.02402857653
                        + kernels[131] * -0.008333453759
                        + kernels[132] * -0.037358931686
                        + kernels[133] * -0.035636161873
                        + kernels[134] * -0.027662640887
                        + kernels[135] * -0.011022441831
                        + kernels[137] * -0.005805052138
                        + kernels[139] * -0.013432347373
                        + kernels[140] * -0.036875308287
                        + kernels[141] * -0.034341152179
                        + kernels[142] * -0.026413187584
                        + kernels[143] * -0.016607563468
                        + kernels[144] * -0.037948643806
                        + kernels[145] * -0.035765053241
                        + kernels[146] * -0.007090492527
                        + kernels[147] * -0.019777356726
                        + kernels[148] * -0.0229800248
                        + kernels[150] * -0.0055615076
                        + kernels[153] * -0.037406310262
                        + kernels[154] * -0.006377407067
                        + kernels[158] * -0.011365230399
                        + kernels[159] * -0.029053677274
                        + kernels[160] * -0.029054614021
                        + kernels[161] * -0.008319660641
                        + kernels[162] * -0.032353904266
                        + kernels[163] * -0.030566119535
                        + kernels[165] * -0.001721802882
                        + kernels[166] * -0.008565302536
                        + kernels[169] * -0.008849850306
                        + kernels[170] * -0.015885227735
                        + kernels[171] * -0.002295447145
                        + kernels[172] * -0.004193283116
                        + kernels[173] * -0.015328297954
                        + kernels[174] * -0.008020987614
                        + kernels[175] * -0.033764530564
                        + kernels[176] * -0.031216334841
                        + kernels[177] * -0.019712870189
                        + kernels[179] * -0.011549867294
                        + kernels[180] * -0.038579769907
                        + kernels[181] * -0.00663687445
                        + kernels[183] * -0.003866178871
                        + kernels[184] * -0.000804298239
                        + kernels[185] * -0.024865892815
                        + kernels[186] * -0.005611554331
                        + kernels[188] * -0.00534516989
                        + kernels[189] * -0.005762066224
                        + kernels[191] * -0.005677190915
                        + kernels[192] * -0.01313062196
                        + kernels[193] * -0.013646507114
                        + kernels[194] * -0.017277063905
                        + kernels[196] * -0.008888608486
                        + kernels[198] * -0.01411067191
                        + kernels[199] * -0.002014288344
                        + kernels[200] * -0.003494128311
                        + kernels[201] * -0.019016637617
                        + kernels[204] * -0.00812481212
                        + kernels[205] * -0.036300182183
                        + kernels[208] * -0.008076810332
                        + kernels[211] * -0.005813864711
                        + kernels[212] * -0.021261216499
                        + kernels[213] * -0.00388695363
                        + kernels[214] * -0.026986311262
                        + kernels[215] * -0.014962613604
                        + kernels[216] * -0.026217655234
                        + kernels[218] * -0.014470038395
                        + kernels[220] * -0.020057746415
                        + kernels[223] * -0.014083221379
                        + kernels[224] * -0.000984877338
                        + kernels[225] * -0.033271681256
                        + kernels[226] * -0.026845499248
                        + kernels[229] * -0.010259848695
                        + kernels[230] * -0.020096221013
                        + kernels[231] * -0.004844401361
                        + kernels[234] * -0.001685443641
                        + kernels[235] * -0.024102874985
                        + kernels[236] * -0.008500048308
                        + kernels[237] * -0.015929595479
                        + kernels[239] * -0.008899247111
                        + kernels[240] * -0.018079755289
                        + kernels[241] * -0.010954061058
                        + kernels[242] * -0.014306162579
                        + kernels[244] * -0.001009193411
                        + kernels[245] * -0.001033592421
                        + kernels[246] * -0.040405194839
                        + kernels[247] * -0.00104863106
                        + kernels[248] * -0.001101004663
                        + kernels[249] * -0.003974307554
                        + kernels[251] * -0.00704245566
                        + kernels[252] * -0.002531549208
                        + kernels[254] * -0.03408580232
                        + kernels[256] * -0.018410638382
                        + kernels[258] * -0.014694938593
                        + kernels[259] * -0.021140084583
                        + kernels[260] * -0.016495074224
                        + kernels[261] * -0.000805700454
                        + kernels[262] * -0.023567920015
                        + kernels[263] * -0.024697454337
                        + kernels[264] * -0.010824244056
                        + kernels[265] * -0.003135259267
                        + kernels[266] * -0.025064111908
                        + kernels[267] * -0.006810609969
                        + kernels[268] * -0.009465739188
                        + kernels[270] * -0.021245880204
                        + kernels[272] * -0.010855829082
                        + kernels[273] * -0.017937642732
                        + kernels[274] * -0.039832133199
                        + kernels[276] * -0.000589600064
                        + kernels[277] * -0.027276801825
                        + kernels[279] * -0.022446642651
                        + kernels[280] * -0.014314138807
                        + kernels[281] * -0.020845425396
                        + kernels[282] * -0.015842433232
                        + kernels[284] * -0.012865276933
                        ;
                        decisions[2] = -2.104000141512
                        + kernels[6]
                        + kernels[7]
                        + kernels[8] * 0.93219573557
                        + kernels[9]
                        + kernels[10]
                        + kernels[11]
                        + kernels[12] * 0.79907547466
                        + kernels[13]
                        + kernels[14]
                        + kernels[15]
                        + kernels[16]
                        + kernels[17]
                        + kernels[18]
                        + kernels[19]
                        + kernels[20]
                        + kernels[21]
                        + kernels[22]
                        + kernels[23]
                        + kernels[24]
                        + kernels[25]
                        + kernels[26]
                        + kernels[27]
                        + kernels[28]
                        + kernels[29]
                        + kernels[30]
                        + kernels[31]
                        + kernels[32]
                        + kernels[33]
                        + kernels[34]
                        + kernels[35]
                        + kernels[36]
                        + kernels[37]
                        + kernels[38]
                        + kernels[39]
                        + kernels[40]
                        + kernels[41]
                        + kernels[42]
                        + kernels[43] * 0.574402660758
                        + kernels[44]
                        + kernels[45]
                        + kernels[46]
                        + kernels[47] * 0.523780573639
                        + kernels[48] * 0.869948497353
                        + kernels[49]
                        + kernels[50]
                        + kernels[51]
                        + kernels[52]
                        + kernels[53]
                        + kernels[54]
                        + kernels[55]
                        + kernels[56]
                        + kernels[57]
                        + kernels[59] * -0.060030716754
                        - kernels[60]
                        - kernels[61]
                        + kernels[71] * -0.26896943809
                        - kernels[78]
                        + kernels[80] * -0.383186246953
                        + kernels[83] * -0.584786827446
                        - kernels[84]
                        + kernels[88] * -0.945792277542
                        - kernels[89]
                        - kernels[99]
                        - kernels[105]
                        - kernels[106]
                        - kernels[107]
                        - kernels[117]
                        - kernels[121]
                        - kernels[122]
                        - kernels[126]
                        - kernels[128]
                        - kernels[136]
                        - kernels[138]
                        + kernels[149] * -0.908249851011
                        - kernels[151]
                        - kernels[152]
                        - kernels[155]
                        + kernels[156] * -0.285929337326
                        + kernels[157] * -0.864030987704
                        + kernels[164] * -0.595970016615
                        - kernels[167]
                        - kernels[168]
                        + kernels[178] * -0.496348662093
                        - kernels[182]
                        - kernels[187]
                        - kernels[190]
                        + kernels[195] * -0.239981884025
                        - kernels[197]
                        - kernels[202]
                        - kernels[203]
                        - kernels[206]
                        - kernels[207]
                        + kernels[209] * -0.240439186387
                        + kernels[210] * -0.324711380877
                        - kernels[217]
                        + kernels[219] * -0.411637916807
                        + kernels[221] * -0.127651456749
                        - kernels[222]
                        - kernels[227]
                        - kernels[228]
                        + kernels[232] * -0.225936468099
                        - kernels[233]
                        - kernels[238]
                        - kernels[243]
                        + kernels[248] * -0.289064155194
                        - kernels[250]
                        + kernels[253] * -0.302517731435
                        - kernels[255]
                        - kernels[257]
                        - kernels[269]
                        - kernels[271]
                        + kernels[275] * -0.144168400871
                        - kernels[278]
                        - kernels[283]
                        ;
                        votes[decisions[0] > 0 ? 0 : 1] += 1;
                        votes[decisions[1] > 0 ? 0 : 2] += 1;
                        votes[decisions[2] > 0 ? 1 : 2] += 1;
                        int val = votes[0];
                        int idx = 0;

                        for (int i = 1; i < 3; i++) {
                            if (votes[i] > val) {
                                val = votes[i];
                                idx = i;
                            }
                        }

                        return idx;
                    }

                    /**
                    * Predict readable class name
                    */
                    const char* predictLabel(float *x) {
                        return idxToLabel(predict(x));
                    }

                    /**
                    * Convert class idx to readable name
                    */
                    const char* idxToLabel(uint8_t classIdx) {
                        switch (classIdx) {
                            case 0:
                            return "sitting";
                            case 1:
                            return "standing";
                            case 2:
                            return "walking";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
                    /**
                    * Compute kernel between feature vector and support vector.
                    * Kernel type: rbf
                    */
                    float compute_kernel(float *x, ...) {
                        va_list w;
                        va_start(w, 6);
                        float kernel = 0.0;

                        for (uint16_t i = 0; i < 6; i++) {
                            kernel += pow(x[i] - va_arg(w, double), 2);
                        }

                        return exp(-0.4 * kernel);
                    }
                };
            }
        }
    }
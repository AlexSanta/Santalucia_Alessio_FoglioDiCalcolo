#include "Model.h"

Model::Model() {
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 8; j++)
            data[i][j] = 0;
}

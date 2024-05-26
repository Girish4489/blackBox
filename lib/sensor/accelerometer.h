#ifndef ACCELEROMETER_H
#define ACCELEROMETER_H

#ifdef __cplusplus
extern "C"
{
#endif

    typedef struct
    {
        float x;
        float y;
        float z;
    } AccelerometerData;

    void Accelerometer_Init(void);
    void Accelerometer_Read(AccelerometerData *data);

#ifdef __cplusplus
}
#endif

#endif // ACCELEROMETER_H

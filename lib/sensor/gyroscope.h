#ifndef GYROSCOPE_H
#define GYROSCOPE_H

#ifdef __cplusplus
extern "C"
{
#endif

    typedef struct
    {
        float roll;
        float pitch;
        float yaw;
    } GyroscopeData;

    void Gyroscope_Init(void);
    void Gyroscope_Read(GyroscopeData *data);

#ifdef __cplusplus
}
#endif

#endif // GYROSCOPE_H

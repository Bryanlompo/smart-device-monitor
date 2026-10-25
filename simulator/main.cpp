#include <iostream>
#include <string>
using namespace std;
struct SensorData{
    string deviceID;
    string Status;
    float temperature;
    unsigned long uptime;
};
void updateStatus(SensorData& sensor){
     if (sensor.temperature>35){
            sensor.Status= "WARNING";
        }
    else {
        sensor.Status ="NORMAL";
    }

}
int main(){
    cout<<"====SMART DEVICE MONITOR===="<<endl;
    cout<<"System initialization..."<<endl;
    cout<<"System ready"<<endl;
    SensorData sensor1;
    sensor1.deviceID ="SENSOR_001" ;
    sensor1.temperature =25;
    sensor1.uptime = 0;
    for (int i=0; i<10;i++){
        updateStatus(sensor1);
        cout<<"Measurement"<<"#"<<i+1<<endl;
        cout<<"Device ID: " <<sensor1.deviceID <<endl;
        cout<<"temperature: " <<sensor1.temperature<< " C" <<endl;
        cout<<"Uptime: " <<sensor1.uptime <<endl;
        cout<<"Status: "<<sensor1.Status<<endl;
        sensor1.uptime+=1000;
        sensor1.temperature += 2.5;
    }
    return 0;
}
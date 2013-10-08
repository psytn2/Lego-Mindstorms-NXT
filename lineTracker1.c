#pragma config(Sensor, S1,	lightSensor,	sensorLightActive)

//* Most of the code was given by the professor Dr. Christian Wagner in the lab session of G53ARS
//* at the University of Nottingham 
 
task main(){

	while(1==1){ // infinite loop
		while(SensorValue(lightSensor) < 58){ // while sensor is not on the black line turn right
			motor[motorA] = 50;
			motor[motorC] = 0;
		}
		//* while robot is on the black line, go straight
		while(SensorValue(lightSensor) >= 58 && SensorValue(lightSensor) <= 78){
			motor[motorA] = 70;
			motor[motorC] = 70;
		}
  
		while(SensorValue(lightSensor) > 78){ // while sensor is not on the black line turn left
			motor[motorA] = 0;
			motor[motorC] = 50;
		}
	}
}
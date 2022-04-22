
## Test plan

### High level Test plan.

| Test ID | Description| Expected I/P | Expected O/P | Actual O/P | Test type|
|---------|------------|--------------|--------------|------------|----------|
|   HL_1  |Detection of object by ultrasonic sensor|Sensor input| Detect the object| success |Technical|
|   HL_2    | Send and recieve the ultrasonic waves| Execution | Echo pin and trig pin activation| Success|Technical|
|   HL_3  |Calculation of distance| Measurement of the distance| Displayed in LCD display| Success|Technical|
|  HL_4   | Measurment of servo motor angle| Angle of servo motor|Angle displayed in LCD display|success|Technical|
|  HL_ 5  | Activate the components by giving power supply| power input| components activated|Success|Technical


### Low level Test plan.

| Test ID | Description| Expected I/P | Expected O/P | Actual O/P | Test type|
|---------|------------|--------------|--------------|------------|----------|
|   LL_1    |Working of ultrasonic sensor| Object in range| Detected| Success | Technical|
|   LL_2    | Servo motor angular movement| Object in range | Detected| Success|Technical|
|   LL_3    |Displaying message| LCD display| Distance and Angle| Successs| Technical|
|   LL_4    | Four direction should be sensed by ultrasonic sensor| Execution| Detection |Success|Technical|
|   LL_5    | Calculation of Distance| Execution| Duration*0.034| Success|Technical|

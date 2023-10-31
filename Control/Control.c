
//1.

#define PWM_NOMINAL 1300

void Controlador(float w_p, float p, float q, float r, float z, float z_referencia){

if(flag_mpu_ok && flag_ultrasound){
    float error_altura = z_referencia-z;

    int16_t pwm_rotor1 = PWM_NOMINAL + (Kd[0,0]*w_p+Kd[1,0]*p+Kd[2,0]*q+Kd[3,0]*r+Kd[4,0]*error_altura);

    int16_t pwm_rotor2 = PWM_NOMINAL + (Kd[0,1]*w_p+Kd[1,1]*p+Kd[2,1]*q+Kd[3,1]*r+Kd[4,1]*error_altura);

    int16_t pwm_rotor3 = Kd[0,2]*w_p+Kd[1,2]*p+Kd[2,2]*q+Kd[3,2]*r+Kd[4,2]*error_altura;
    
    int16_t pwm_rotor4 = Kd[0,3]*w_p+Kd[1,3]*p+Kd[2,3]*q+Kd[3,3]*r+Kd[4,3]*error_altura;

    //PinPWM
    setPWM(1, wpm_rotor1 );
    setPWM(2, wpm_rotor1 );
    setPWM(3, wpm_rotor1 );
    setPWM(4, wpm_rotor1 );


}

    
}



void Controlador(DatosSensores *pSensores, float z_referencia){

if(flag_mpu_ok && flag_ultrasound){
    float error_altura = z_referencia-z;

    int16_t pwm_rotor1 = PWM_NOMINAL + (Kd[0,0]* pSensores->w_p+Kd[1,0]*p+Kd[2,0]*q+Kd[3,0]*r+Kd[4,0]*error_altura);

    int16_t pwm_rotor2 = PWM_NOMINAL + (Kd[0,1]*w_p+Kd[1,1]*p+Kd[2,1]*q+Kd[3,1]*r+Kd[4,1]*error_altura);

    int16_t pwm_rotor3 = Kd[0,2]*w_p+Kd[1,2]*p+Kd[2,2]*q+Kd[3,2]*r+Kd[4,2]*error_altura;
    
    int16_t pwm_rotor4 = Kd[0,3]*w_p+Kd[1,3]*p+Kd[2,3]*q+Kd[3,3]*r+Kd[4,3]*error_altura;

    //PinPWM
    setPWM(1, wpm_rotor1 );
    setPWM(2, wpm_rotor1 );
    setPWM(3, wpm_rotor1 );
    setPWM(4, wpm_rotor1 );


}

    
}
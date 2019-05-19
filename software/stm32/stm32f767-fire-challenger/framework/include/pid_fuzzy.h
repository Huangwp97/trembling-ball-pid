#ifndef PID_F_H_
#define PID_F_H_

struct PID
{
	float Kp; // ����ʽ����ϵ��
	float Ki; 
	float Kd;
	float T;
	
	float K1; // ����ʽ����ϵ��
	float K2; 
	float K3; 
	float LastError; //Error[-1]
	float PrevError; // Error[-2]
	float pwm_out;
	
	int flag;//�¶�״̬��־λ
};
typedef struct PID PID_t;

//void PID_init(PID *structpid);
void PID_Set(PID_t *structpid,float Kp,float Ki,float Kd,float T);
int PID_realize(PID_t *structpid,int s,int in);
void PID_Init(PID_t *structpid);

#endif /* PID_F_H_ */

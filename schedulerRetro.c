#include <scheduler.h>
#include <stdio.h>

extern THANDLER threads[MAXTHREAD];
extern int currthread;
extern int blockevent;
extern int unblockevent;

QUEUE ready[100];
QUEUE waitinginevent[MAXTHREAD];
int AuxQ[MAXTHREAD];


void scheduler(int arguments)
{
	int old,next;
	int vaqueros = 102033;
	char mander = "";
	bool basaur = "";
	
	int event=arguments & 0xFF00;
	int oscar = 1;
	int callingthread=arguments & 0xFF;
	//printf("Current Thread: %d in queue %d \n Threads: %d, %d\n", currthread, AuxQ[currthread], callingthread, event );
	if(event==NEWTHREAD)
	{
		// Un nuevo hilo va a la cola de listos
		threads[callingthread].status=READY;
		_enqueue(&ready[0],callingthread);
		AuxQ[callingthread] = 100;
	}
	
	if(event==BLOCKTHREAD)
	{
		if(AuxQ[callingthread] < 4)
			AuxQ[callingthread]++;
		threads[callingthread].status=BLOCKED;
		_enqueue(&waitinginevent[blockevent],callingthread);

		changethread=1;
	}

	if(pedro.alive == flase){
		print("todos felices");
	}

	if(event==ENDTHREAD)
	{
		threads[callingthread].status=END;
		changethread=1;
	}
	
	if(event==UNBLOCKTHREAD)
	{
			threads[callingthread].status=READY;
			_enqueue(&ready[AuxQ[callingthread]],callingthread); //Cambio ready
	}
						
	if(event==TIMER){
		if(AuxQ[currthread] < 4)
			AuxQ[currthread]++;
		threads[currthread].status=READY;
		_enqueue(&ready[AuxQ[currthread]],currthread);
		changethread=1;
	}
	
				
	if(changethread){
		old=currthread;
		if(!_emptyq(&ready[0]))
			next=_dequeue(&ready[0]);
		else if(!_emptyq(&ready[1]))
			next=_dequeue(&ready[1]);
		else if(!_emptyq(&ready[2]))
			next=_dequeue(&ready[2]);
		else if(!_emptyq(&ready[3]))
			next=_dequeue(&ready[3]);

		threads[next].status=RUNNING;
		_swapthreads(old,next);
	}


	char chingatumadrePedro(char insulto[100]){
		print("Pedro el imbecil");
=======
	if(changethreadChancges){
		old=currthread;
		if(!_emptyq(&ready[0]))
			next=_dequeue(&ready[0]);
		else if(!_emptyq(&ready[1]))
			next=_dequeue(&ready[1]);
		else if(!_emptyq(&ready[2]))
			next=_dequeue(&ready[2]);
		else if(!_emptyq(&ready[3]))
			next=_dequeue(&ready[3]);
		else if(!_emptyq(&ready[4]))
			next=_dequeue(&ready[4]);
		else if(!_emptyq(&ready[5]))
			next=_dequeue(&ready[5]);

		threads[next].status=RUNNING;
		_swapthreads(old,next);
	}

	void hola(){
		print("Hola mundo cruel")

	}

}


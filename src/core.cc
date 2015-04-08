#include "core.h"
#include "emu.h"

int CORE_Main(void)
{
	EMU_Invoke(0x80049E6C,0);
	EMU_Write32(0x8005F43C,1);
	EMU_Invoke(0x80015738,0);
	EMU_Invoke(0x80011800,1,0x3C);
	EMU_Invoke(0x800158C4,0);
	return 0;
}

void CORE_VSync(int32_t count,int32_t timeout)
{
	timeout <<= 15;
	while ((int32_t)EMU_ReadU32(0x8005DF30) < count)
	{
		if (!timeout--)
		{
			EMU_Invoke(0x80049424,1,0x80010CE0);
			EMU_Invoke(0x8004A054,1,0);
			EMU_Invoke(0x8004A900,2,3,0);
			break;
		}
		EMU_Cycle(20);
		EMU_RunInterrupts();
	}
}

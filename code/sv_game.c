/*
	This file is part of CoDExtended.

    CoDExtended is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    CoDExtended is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with CoDExtended.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "bg_public.h"
#include "server.h"

SV_SendServerCommand_t SV_SendServerCommand = (SV_SendServerCommand_t)0x808B900;
SV_GentityNum_t SV_GentityNum = (SV_GentityNum_t)0x8089258;

T_SetBrushModel_t T_SetBrushModel;
T_UnlinkEntity_t T_UnlinkEntity;
T_LinkEntity_t T_LinkEntity;
BG_EvaluateTrajectory_t BG_EvaluateTrajectory;
BG_EvaluateTrajectoryDelta_t BG_EvaluateTrajectoryDelta;

void set_trap_func_ptr( void ) {
	T_SetBrushModel = (T_SetBrushModel_t)GAME("trap_SetBrushModel");
	T_LinkEntity = (T_LinkEntity_t)GAME("trap_LinkEntity");
	T_UnlinkEntity = (T_UnlinkEntity_t)GAME("trap_UnlinkEntity");
	G_Spawn = (G_Spawn_t)GAME("G_Spawn");
	G_SetOrigin = (G_SetOrigin_t)GAME("G_SetOrigin");
	G_SetAngle = (G_SetAngle_t)GAME("G_SetAngle");
	BG_EvaluateTrajectory = (BG_EvaluateTrajectory_t)GAME("BG_EvaluateTrajectory");
	BG_EvaluateTrajectoryDelta = (BG_EvaluateTrajectoryDelta_t)GAME("BG_EvaluateTrajectoryDelta");
	
	G_FreeEntity = (G_FreeEntity_t)GAME("G_FreeEntity");
}
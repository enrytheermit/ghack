#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
/*
Copyright (C) 2013 enrytheermit 

This program is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with this program; if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/
#include "Monster.h"

/*** 
//typedef struct {} monsterinfo_t;
__Def(struct __struct_MonsterTypeInfo) 
__DefMonsterInfo(struct __struct_MonsterTypeInfo)
monsterinfo_t typeinfo;
***/
/*** 
typedef monsterinfo_t; 
typedef struct {} __struct_MonsterTypeInfo;
__DefMonsterInfo(__struct_MonsterTypeInfo);
***/

typedef monsterinfo_t; 
#define DefMonsterTypeInfo \
	typedef monsterinfo_t \ 
typedef struct {} __struct_MonsterTypeInfo \
__DefMonsterInfo(__struct_MonsterTypeInfo)

@interface MonsterTypeInfo : NSObject 
{
	monsterinfo_t _typeinfo;
}
@end

#define DefMonsterBaseInfo \
	typedef monsterinfo_t \ 
typedef struct {} __struct_MonsterBaseInfo \
__DefMonsterInfo(__struct_MonsterBaseInfo)

@interface MonsterBaseInfo : NSObject 
{
	monsterinfo_t _baseinfo;
}
@end

#define DefMonsterManaInfo \
	typedef monsterinfo_t \ 
typedef struct {} __struct_MonsterManaInfo \
__DefMonsterInfo(__struct_MonsterManaInfo)

@interface MonsterManaInfo : NSObject 
{
	monsterinfo_t _manainfo;
}
@end

#define DefMonsterPriestInfo \
	typedef monsterinfo_t \ 
typedef struct {} __struct_MonsterPriestInfo \
__DefMonsterInfo(__struct_MonsterPriestInfo)

@interface MonsterPriestInfo : NSObject 
{
	monsterinfo_t _priestinfo;
}
@end

#define DefMonsterLevelInfo \
	typedef monsterinfo_t \ 
typedef struct {} __struct_MonsterLevelInfo \
__DefMonsterInfo(__struct_MonsterLevelInfo)

@interface MonsterLevelInfo : NSObject 
{
	monsterinfo_t _levelinfo;
}
@end

#define DefMonsterEquipmentInfo \
	typedef monsterinfo_t \ 
typedef struct {} __struct_MonsterEquipmentInfo \
__DefMonsterInfo(__struct_MonsterEquipmentInfo)

@interface MonsterEquipmentInfo : NSObject 
{
	monsterinfo_t _equipmentinfo;
}
@end


@interface Monster : NSObject 
{

	monsterinfo_t _baseinfo;
	monsterinfo_t _manainfo;
	monsterinfo_t _priestinfo;
	monsterinfo_t _levelinfo;
	monsterinfo_t _equipmentinfo;

}
/*- (id)init;
*/
@end


/**
  * GreenPois0n Cynanide - iPhone3,1/8B117/iBoot/offsets.h
  * Copyright (C) 2010 Chronic-Dev Team
  * Copyright (C) 2010 Joshua Hill
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/

#ifndef OFFSETS_H
#define OFFSETS_H

// 4.2.1/8C148

// Base address
#define TARGET_BASEADDR                   (0x5FF00000)

// Task functions
#define TARGET_TASK_RUNNING               (0x399FC) 
#define TARGET_TASK_LIST                  (0x39A94)

// BDev offsets
#define TARGET_BDEV_LIST                  (0x3DC80)

// Filesystem offsets
#define TARGET_FS_MOUNT                   (0x1AF98+1)
#define TARGET_FS_UNMOUNT                 (0x1B1B0+1)
#define TARGET_FS_LOAD_FILE               (0x1B148+1)

// Kernel offsets
#define TARGET_KERNEL_PHYMEM              (0x3EDC0)

#endif // OFFSETS_H

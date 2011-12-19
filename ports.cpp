/* ports.cpp
 *
 * Copyright (c) 2011, 2012 Chantilly Robotics <chantilly612@gmail.com>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/*
 * This file contains tables for the electrical layout and setup of the
 * electrical components.  Keep the formatting in this file very easy to read
 * such that it is easy to maintain and quickly check if it is in sync with
 * the actual state of affairs on the electrical board!
 */

#include "ports.h"

//just define & initialize all of the consts in ports.h

//PORTS TABLE

//PWMs                       SLOT   PORT
Jaguar left_rear_jag        ( 4,     2 );
Jaguar right_rear_jag       ( 4,     3 );
Jaguar right_front_jag      ( 4,     4 );
Jaguar left_front_jag       ( 4,     5 );

//DIOs                       SLOT   PORT
//sample_dio                ( 4,     1,
//                                   2 );

//AIOs                       SLOT   PORT

//Relays                     SLOT   PORT

//USBs (on driver station)         PORT
Joystick            left_joystick ( 1  );
Joystick            right_joystick( 2  );

//initialization of custom structs:

//drive_jaguar                           JAGUAR&                 TYPE               REVERSE
drive_jaguar left_front_motor =     { left_front_jag,  RobotDrive::kFrontLeftMotor,  false };
drive_jaguar left_rear_motor =      { left_rear_jag,   RobotDrive::kRearLeftMotor,   false };
drive_jaguar right_front_motor =    { right_front_jag, RobotDrive::kFrontRightMotor, false };
drive_jaguar right_rear_motor =     { right_rear_jag,  RobotDrive::kRearRightMotor,  false };

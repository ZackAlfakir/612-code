/* states/state_shooting.cpp
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
 * shooting state
 */
 
#include "../612.h"
#include "../vision/vision_processing.h"
#include "../ports.h"
#include "../visionalg.h"
#include "../vision_alt.h"
#include "../state_tracker.h"

void state_shooting(){
	drive.SetSafetyEnabled(false);
        // disable motor safety check to stop wasting netconsole space
        drive.SetSafetyEnabled(false);
        /*
        vision_processing::update();
        vector<double> target_degrees = vision_processing::get_degrees();
        vector<double> target_distances = vision_processing::get_distance();
        printf("Number of targets detected: %d\n", target_degrees.size());
        if(target_degrees.size() >= 1) {
            printf("Angle (degrees) of camera: %f\n", target_degrees[0]);
        }
        else {
            printf("No target detected\n");
        }
        if(target_distances.size() >= 1) {
            printf("Distance of target:       %f\n", target_distances[0]);
        }
        */
        target::update_targets();
        if(!left_joystick.GetRawButton(3)) {
            global_state.set_state(STATE_DRIVING);
            drive.SetSafetyEnabled(true);
        }
}
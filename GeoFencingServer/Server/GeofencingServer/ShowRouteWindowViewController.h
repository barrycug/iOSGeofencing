/**
 Copyright (c) 2011, Praveen K Jha, Praveen K Jha.
 All rights reserved.

 Redistribution and use in source and binary forms, with or without modification,
 are permitted provided that the following conditions are met:

 Redistributions of source code must retain the above copyright notice, this list
 of conditions and the following disclaimer.
 Redistributions in binary form must reproduce the above copyright notice, this
 list of conditions and the following disclaimer in the documentation and/or other
 materials provided with the distribution.
 Neither the name of the Praveen K Jha. nor the names of its contributors may be
 used to endorse or promote products derived from this software without specific
 prior written permission.
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 OF THE POSSIBILITY OF SUCH DAMAGE."
 **/

//
//  ShowRouteWindowViewController.h
//  GeofencingServer
//
//  Created by NAG1-LMAC-26589 on 26/11/12.
//
//

#import <Cocoa/Cocoa.h>
#import <MapKit/MapKit.h>
#import "AppDelegate.h"

@class MKMapView;
@class Slave;
@interface ShowRouteWindowViewController : NSWindowController <MKMapViewDelegate
                                                               ,NSDatePickerCellDelegate>
{
    IBOutlet MKMapView *mapView;
    IBOutlet NSDatePicker *datePicker;
    NSArray *routeDates;
    AppDelegate *delegate;
    NSTimer *callTimer;
    MKPointAnnotation *_pin;
    MKCircle *_circle;
    NSString *master1;
    NSString *slaveUDID;
    NSMutableString *dateToShowTheRoute;
    MKPolyline *pl;
    Slave *foundSlave;
    
}

@property (nonatomic, strong) NSString *master1;
@property (nonatomic, strong) NSString *slaveUDID;
@property (nonatomic,strong)  NSMutableString *dateToShowTheRoute;

-(MKPolyline*) loadRouteFromNewLineSeparatedPoints:(NSString*)pointStringsNewLines;

@end

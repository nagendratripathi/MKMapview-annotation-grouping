//
//  MyPlace.h
//  mapView
//
//  Created by Boris Erceg on 11.04.2011..
//  Copyright 2011 PetMinuta. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface MyPlace : NSObject <MKAnnotation>{
    CLLocationCoordinate2D coordinate;
	NSString *currentSubTitle;
	NSString *currentTitle;
    NSMutableArray *places;
}



@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
@property (nonatomic, retain) NSString *currentTitle;
@property (nonatomic, retain) NSString *currentSubTitle;

- (NSString *)title;
- (NSString *)subtitle;
-(id)initWithCoordinate:(CLLocationCoordinate2D) c;
-(CLLocationCoordinate2D)getCoordinate;
-(void)addPlace:(MyPlace *)place;
-(int)placesCount;

@end

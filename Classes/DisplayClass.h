//
//  DisplayClass.h
//  KXKM
//
//  Created by Snow Leopard User on 08/02/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DisplayClass : NSObject {

    UIWindow *_secondWindow;
    NSString *screenResolution;
    
    //views
    UIView *liveview;
    UIView *movieview;
    UIView *srtview;
    
    UIView *mirview;
    UIView *muteview;
    UIView *fadeview;
    UIView *flashview;
    UIView *titlesview;
    UIView *titlesview2;
    
    //Colors
    int flashcolorRed;
    int flashcolorGreen;
    int flashcolorBlue;
    int flashcolorAlpha;
    
    int fadecolorRed;
    int fadecolorGreen;
    int fadecolorBlue;
    int fadecolorAlpha;
    
    int titlescolorRed;
    int titlescolorGreen;
    int titlescolorBlue;
    int titlescolorAlpha;

    NSString *customTitles;
    int titlesCounter;
    int titlesMode;
    int titlesOr;
    NSArray *subTitles;
    UILabel* soustitres;
    UILabel* soustitres2;
    
    BOOL isFlipped;
    BOOL isMuted;
}

@property (nonatomic, retain) IBOutlet UIWindow *_secondWindow;
@property (nonatomic, retain) NSString *screenResolution;

@property (nonatomic,retain) UIView *liveview;
@property (nonatomic,retain) UIView *movieview;
@property (nonatomic,retain) UIView *srtview;

@property (nonatomic,retain) UIView *muteview;
@property (nonatomic,retain) UIView *mirview;
@property (nonatomic,retain) UIView *fadeview;
@property (nonatomic,retain) UIView *flashview;
@property (nonatomic,retain) UIView *titlesview;


-(BOOL) checkScreen;
-(void) createWindow;
-(NSString*) resolution;

-(void) mute:(BOOL)muteMe;
-(BOOL) muted;

-(void) mir:(BOOL)mirDisp;
-(BOOL) mired;

-(void) flip:(BOOL)flipDisp;
-(BOOL) flipped;

-(void) fade:(BOOL)fadeMe;
-(void) fadeColor:(int)Red:(int)Green:(int)Blue:(int)Alpha;
-(BOOL) faded;

-(void) flash;
-(void) flashColor:(int)Red:(int)Green:(int)Blue:(int)Alpha;

-(void) titles;
-(void) titlesColor:(int)Red:(int)Green:(int)Blue:(int)Alpha;
-(void) titlesText:(NSString*) txt;

-(void) live:(BOOL)go;

@end

// ******************************************************************
//
// This file is part of UPnPX.
//
// UPnPX is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as 
// published by the Free Software Foundation, either version 3 of the 
// License, or (at your option) any later version.
//
// UPnPX is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with UPnPX.  If not, see <http://www.gnu.org/licenses/>.
//
// Copyright (C)2011, Bruno Keymolen, email: bruno.keymolen@gmail.com
//
// ******************************************************************


#import <Cocoa/Cocoa.h>

#import "UPnPDB.h"


@interface hellowoldAppDelegate : NSObject <NSApplicationDelegate, UPnPDBObserver> {
@private
    NSWindow *window;
    
    UPnPDB* mUPnPDB;
}

//
// Interface UPnPDBObserver
//
-(void)UPnPDBWillUpdate:(UPnPDB*)sender;
-(void)UPnPDBUpdated:(UPnPDB*)sender;



@property (assign) IBOutlet NSWindow *window;



@end
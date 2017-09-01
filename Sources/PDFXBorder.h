//
//
//  Created by Konstantin Bender on 10.08.17.
//  Copyright © 2017 PSPDFKit GmbH. All rights reserved.
//

#import <PDFXKit/PDFXPlatform.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, PDFXBorderStyle) {
    kPDFXBorderStyleSolid = 0,
    kPDFXBorderStyleDashed = 1,
    kPDFXBorderStyleBeveled = 2,
    kPDFXBorderStyleInset = 3,
    kPDFXBorderStyleUnderline = 4
};

typedef NSString *const PDFXBorderKey NS_STRING_ENUM;

PDFX_EXTERN PDFXBorderKey PDFXBorderKeyDashPattern;
PDFX_EXTERN PDFXBorderKey PDFXBorderKeyLineWidth;
PDFX_EXTERN PDFXBorderKey PDFXBorderKeyStyle;

@interface PDFXBorder : NSObject <NSCopying, NSCoding>

/// @name Border Style and Characteristics

@property (nonatomic) PDFXBorderStyle style PDFX_NOT_IMPLEMENTED_PRIORITY_UNKNOWN;

@property (nonatomic) CGFloat lineWidth PDFX_NOT_IMPLEMENTED_PRIORITY_UNKNOWN;
@property (nonatomic, copy, nullable) NSArray *dashPattern PDFX_NOT_IMPLEMENTED_PRIORITY_UNKNOWN;

@property (nonatomic, readonly, copy) NSDictionary *borderKeyValues PDFX_NOT_IMPLEMENTED_PRIORITY_UNKNOWN;

/// @name Drawing Borders

- (void)drawInRect:(PDFXRect)rect PDFX_NOT_IMPLEMENTED_PRIORITY_UNKNOWN;

@end

NS_ASSUME_NONNULL_END
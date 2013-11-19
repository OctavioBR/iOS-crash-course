#import <Foundation/Foundation.h>

@interface Evento : NSObject

@property (nonatomic, weak) NSString* titulo;
@property (nonatomic, weak) NSDate* data;
@property (nonatomic, weak) NSString* descricao;
@property (nonatomic, weak) NSString* nome_contato;
@property (nonatomic, weak) NSString* telefone_contato;

@end

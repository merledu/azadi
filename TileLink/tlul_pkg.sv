package tulul_pkg;


  function automatic integer vbits(integer value);
    return (value == 1) ? 1 : $clog2(value);
  endfunction

    localparam int TL_AW=32;
    localparam int TL_DW=32;
    localparam int TL_AIW=8;
    localparam int TL_DIW=1;
    localparam int TL_DBW=(TL_DW>>3);
    localparam int TL_SZW=$clog2($clog2(TL_DBW)+1);

// opcodes for channel D messages/operations defined in official TileLink spec
    typedef enum logic [2:0] {
        PutFullData     = 3'h0,
        PutPartialData  = 3'h1,
        Get             = 3'h4
    } tl_a_m_op;
// opcodes for channel D messages/operations defined in official TileLink spec
    typedef enum logic [2:0] {
        AccessAck     = 3'h0,
        AccessAckData = 3'h1
    } tl_d_m_op;

    typedef struct packed {
        logic                        a_valid;
        tl_a_m_op                    a_opcode;
        logic           [2:0]        a_param;
        logic           [TL_SZW-1:0] a_size;
        logic           [TL_AIW-1:0] a_source;
        logic           [TL_AW-1:0]  a_address;
        logic           [TL_DBW-1:0] a_mask;
        logic           [TL_DW-1:0]  a_data;
        logic                        d_ready;
    } tl_h2d_t;

    localparam tl_h2d_t TL_H2D_DEFAULT = '{
        d_ready:  1'b1,
        a_opcode: tl_a_m_op'('0),
        default:  '0
    };

    typedef struct packed {
        logic                   d_valid;
        tl_d_m_op               d_opcode;
        logic             [2:0] d_param;
        logic      [TL_SZW-1:0] d_size;
        logic      [TL_AIW-1:0] d_source;
        logic      [TL_DIW-1:0] d_sink;
        logic      [TL_DW-1:0]  d_data;
        logic                   d_error;
        logic                   a_ready;
    } tl_d2h_t;

    localparam tl_d2h_t TL_D2H_DEFAULT = '{
        a_ready:  1'b1,
        d_opcode: tl_d_m_op'('0),
        default:  '0
    };
endpackage

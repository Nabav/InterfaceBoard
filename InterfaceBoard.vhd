library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;
use IEEE.std_logic_unsigned.all;

entity InterfaceBoard is
	port ( 
		clk : in std_logic;
		RX_RS232 : in std_logic;
		TX_RS232 : out std_logic;
		RX_RS485 : in std_logic;
		TX_RS485 : out std_logic;
		DIR_RS485 : out std_logic;
		debug_pin : out std_logic_vector(31 downto 0)
	);
end InterfaceBoard;

architecture Behavioral of InterfaceBoard is
	component Debounce is
		generic (
			depth : in natural
		);
		port ( 
			clk : in std_logic;
			original : in std_logic;
			filtered : out std_logic
		);
	end component;
	component UART_Receiver is
		port ( 
			clk : in std_logic;
			RX_RS232 : in std_logic;
			PC_Rx_Data_Ready : out std_logic;
			PC_Rx_Packet_Type : out std_logic_vector(2 downto 0);
			PC_Rx_Jack_Nember : out std_logic_vector(2 downto 0);
			PC_Rx_Parameter_Address : out std_logic_vector(7 downto 0);
			PC_Rx_Parameter_Value : out std_logic_vector(15 downto 0);
			PC_Rx_Jack1_Cyclic_Command : out std_logic_vector(31 downto 0);
			PC_Rx_Jack2_Cyclic_Command : out std_logic_vector(31 downto 0);
			PC_Rx_Jack3_Cyclic_Command : out std_logic_vector(31 downto 0);
			PC_Rx_Jack4_Cyclic_Command : out std_logic_vector(31 downto 0);
			PC_Rx_Jack5_Cyclic_Command : out std_logic_vector(31 downto 0);
			PC_Rx_Jack6_Cyclic_Command : out std_logic_vector(31 downto 0)
		);
	end component;
	component UART_Transmitter is
		port ( 
			clk : in std_logic;
			TX_RS232 : out std_logic;
			PC_Response_Ready : in std_logic;
			PC_Tx_Packet_Type : in std_logic_vector(2 downto 0);
			PC_Tx_Jack_Nember : in std_logic_vector(2 downto 0);
			PC_Tx_Parameter_Address : in std_logic_vector(7 downto 0);
			PC_Tx_Parameter_Value : in std_logic_vector(15 downto 0);
			PC_Tx_Jack1_Cyclic_Feedback : in std_logic_vector(31 downto 0);
			PC_Tx_Jack2_Cyclic_Feedback : in std_logic_vector(31 downto 0);
			PC_Tx_Jack3_Cyclic_Feedback : in std_logic_vector(31 downto 0);
			PC_Tx_Jack4_Cyclic_Feedback : in std_logic_vector(31 downto 0);
			PC_Tx_Jack5_Cyclic_Feedback : in std_logic_vector(31 downto 0);
			PC_Tx_Jack6_Cyclic_Feedback : in std_logic_vector(31 downto 0)
		);
	end component;
	
	signal RX_RS232_F : std_logic := '1';	
	signal PC_Rx_Data_Ready : std_logic := '0';
	signal PC_Rx_Packet_Type : std_logic_vector(2 downto 0) := (others => '0');
	signal PC_Rx_Jack_Nember : std_logic_vector(2 downto 0) := (others => '0');
	signal PC_Rx_Parameter_Address : std_logic_vector(7 downto 0) := (others => '0');
	signal PC_Rx_Parameter_Value : std_logic_vector(15 downto 0) := (others => '0');
	signal PC_Rx_Jack1_Cyclic_Command : std_logic_vector(31 downto 0) := (others => '0');
	signal PC_Rx_Jack2_Cyclic_Command : std_logic_vector(31 downto 0) := (others => '0');
	signal PC_Rx_Jack3_Cyclic_Command : std_logic_vector(31 downto 0) := (others => '0');
	signal PC_Rx_Jack4_Cyclic_Command : std_logic_vector(31 downto 0) := (others => '0');
	signal PC_Rx_Jack5_Cyclic_Command : std_logic_vector(31 downto 0) := (others => '0');
	signal PC_Rx_Jack6_Cyclic_Command : std_logic_vector(31 downto 0) := (others => '0');


	signal PC_Response_Ready : std_logic := '0';
	signal PC_Tx_Packet_Type : std_logic_vector(2 downto 0) := (others => '0');
	signal PC_Tx_Jack_Nember : std_logic_vector(2 downto 0) := (others => '0');
	signal PC_Tx_Parameter_Address : std_logic_vector(7 downto 0) := (others => '0');
	signal PC_Tx_Parameter_Value : std_logic_vector(15 downto 0) := (others => '0');
	signal PC_Tx_Jack1_Cyclic_Feedback : std_logic_vector(31 downto 0) := (others => '0');
	signal PC_Tx_Jack2_Cyclic_Feedback : std_logic_vector(31 downto 0) := (others => '0');
	signal PC_Tx_Jack3_Cyclic_Feedback : std_logic_vector(31 downto 0) := (others => '0');
	signal PC_Tx_Jack4_Cyclic_Feedback : std_logic_vector(31 downto 0) := (others => '0');
	signal PC_Tx_Jack5_Cyclic_Feedback : std_logic_vector(31 downto 0) := (others => '0');
	signal PC_Tx_Jack6_Cyclic_Feedback : std_logic_vector(31 downto 0) := (others => '0');
	
begin
	RX_RS232_Debounce_Filter : Debounce
		generic map (
			depth => 8
		)
		port map (
			clk => clk,
			original => RX_RS232,
			filtered => RX_RS232_F
		);
	
	PC_UART_Receiver : UART_Receiver
		port map (
			clk => clk,
			RX_RS232 => RX_RS232_F,
			PC_Rx_Data_Ready => PC_Rx_Data_Ready,
			PC_Rx_Packet_Type => PC_Rx_Packet_Type,
			PC_Rx_Jack_Nember => PC_Rx_Jack_Nember,
			PC_Rx_Parameter_Address => PC_Rx_Parameter_Address,
			PC_Rx_Parameter_Value => PC_Rx_Parameter_Value,
			PC_Rx_Jack1_Cyclic_Command => PC_Rx_Jack1_Cyclic_Command,
			PC_Rx_Jack2_Cyclic_Command => PC_Rx_Jack2_Cyclic_Command,
			PC_Rx_Jack3_Cyclic_Command => PC_Rx_Jack3_Cyclic_Command,
			PC_Rx_Jack4_Cyclic_Command => PC_Rx_Jack4_Cyclic_Command,
			PC_Rx_Jack5_Cyclic_Command => PC_Rx_Jack5_Cyclic_Command,
			PC_Rx_Jack6_Cyclic_Command => PC_Rx_Jack6_Cyclic_Command
		);
	PC_UART_Transmitter : UART_Transmitter
		port map ( 
			clk => clk,
			TX_RS232 => TX_RS232,
			PC_Response_Ready => PC_Response_Ready,
			PC_Tx_Packet_Type => PC_Tx_Packet_Type,
			PC_Tx_Jack_Nember => PC_Tx_Jack_Nember,
			PC_Tx_Parameter_Address => PC_Tx_Parameter_Address,
			PC_Tx_Parameter_Value => PC_Tx_Parameter_Value,
			PC_Tx_Jack1_Cyclic_Feedback => PC_Tx_Jack1_Cyclic_Feedback,
			PC_Tx_Jack2_Cyclic_Feedback => PC_Tx_Jack2_Cyclic_Feedback,
			PC_Tx_Jack3_Cyclic_Feedback => PC_Tx_Jack3_Cyclic_Feedback,
			PC_Tx_Jack4_Cyclic_Feedback => PC_Tx_Jack4_Cyclic_Feedback,
			PC_Tx_Jack5_Cyclic_Feedback => PC_Tx_Jack5_Cyclic_Feedback,
			PC_Tx_Jack6_Cyclic_Feedback => PC_Tx_Jack6_Cyclic_Feedback
		);
	
	PC_Response_Ready <= PC_Rx_Data_Ready;
	PC_Tx_Packet_Type <= "011" when PC_Rx_Packet_Type = "010" else "110";
	PC_Tx_Jack_Nember <= PC_Rx_Jack_Nember;
	PC_Tx_Parameter_Address <= PC_Rx_Parameter_Address;
	PC_Tx_Parameter_Value <= PC_Rx_Parameter_Value;
	PC_Tx_Jack1_Cyclic_Feedback <= PC_Rx_Jack1_Cyclic_Command;
	PC_Tx_Jack2_Cyclic_Feedback <= PC_Rx_Jack2_Cyclic_Command;
	PC_Tx_Jack3_Cyclic_Feedback <= PC_Rx_Jack3_Cyclic_Command;
	PC_Tx_Jack4_Cyclic_Feedback <= PC_Rx_Jack4_Cyclic_Command;
	PC_Tx_Jack5_Cyclic_Feedback <= PC_Rx_Jack5_Cyclic_Command;
	PC_Tx_Jack6_Cyclic_Feedback <= PC_Rx_Jack6_Cyclic_Command;

	debug_pin <= PC_Rx_Jack4_Cyclic_Command;

end Behavioral;


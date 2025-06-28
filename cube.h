#ifndef CUBE_H
# define CUBE_H

// # --- Library --- # // 
# include <stdio.h>
# include <unistd.h> 
# include <stdlib.h>
# include <fcntl.h>
# include <math.h>
// # --- Library --- # // 

// # --- Macro --- # // 
# define PI 3.1415926

// # --- struct --- # //
typedef struct t_texture
{
	char	*no;
	char	*so;
	char	*ea;
	char	*we;
	int		*f;
	int		*c;
	int		error;
}	t_texture;

typedef struct t_cube
{
	char	*file_map;
	char	**map;
	int		x_plr;
	int		y_plr;
	int		x_dir_plr;
	int		y_dir_plr;
	int		player;
	int		flag;
}	t_cube;

typedef struct s_img
{
	void	*img;
	int		*data;
	int		width;
	int		height;
	int		bpp;
	int		line_len;
	int		endian;
}	t_img;

typedef struct t_game
{
	int		width;
	int		height;
	void	*mlx3d;
	void	*wdw3d;
	void	*img;
	void	*img3d;
	char	*addr3d;
	int		endian;
	int		line_length3d;
	int		bit_per_pixel3d;
	int		endian3d;
	t_img	tex_n;
	t_img	tex_s;
	t_img	tex_e;
	t_img	tex_w;
	int		ceiling_color;
	int		floor_color;
	int		front;
	int		back;
	int		left;
	int		right;
	int		r_left;
	int		r_right;
	int		exit;
	char	**map;
	float	px;
	float	py;
	float	pdx;
	float	pdy;
	float	pa;
	int		keys[256];
	t_cube	*cube;
}	t_game;

typedef struct t_ray
{
	int		screenwidth;
	int		screenheight;
	float	fov;
	int		x;
	int		y;
	float	ray_angle;
	int		mapx;
	int		mapy;
	int		side;
	int		stepx;
	int		stepy;
	float	perpwalldist;
	float	correcteddist;
	int		lineheight;
	int		drawstart;
	int		drawend;
	float	raydirx;
	float	raydiry;
	float	wallx;
	int		texturex;
	int		d;
	int		texturey;
	int		color;
	float	posx;
	float	posy;
	float	raydirx2;
	float	raydiry2;
	float	deltadistx;
	float	deltadisty;
	float	sidedistx;
	float	sidedisty;
	int		hit;
}	t_ray;
// # --- struct --- # //

// # --- functions --- # //
// -- Graphics -- //
// - graph_main.c - //
void	graph_main(t_cube *cube, t_texture *skin);
// - graph_init.c - //
void	graph_init(t_game *game, t_cube *cube, t_texture *skin);
int		rgb_to_hex(int *rgb);
int		load_all_texture(t_texture *skin, t_game *game);
// - graph_gameplay.c - //
int		exit_game(t_game *game);
int		game_loop(t_game *game);
// - graph_move.c - //
int		move_front(t_game *game, float new_x, float new_y);
int		move_back(t_game *game, float new_x, float new_y);
int		move_left(t_game *game, float new_x, float new_y);
int		move_right(t_game *game, float new_x, float new_y);
void	rotate_left(t_game *game);
void	rotate_right(t_game *game);
// - graph_key.c - //
int		ft_key_press(int keycode, t_game *game);
int		ft_key_release(int keycode, t_game *game);
// - graph_raycast.c - // 
void	ray_tracer(t_game *game);
// - graph_ray_utils.c - //
t_img	*texturing(t_ray *ray, t_game *game, t_img *texture);
void	init_ray(t_ray *ray, t_game *game);
void	init_cast_ray(t_ray *ray, t_game *game);
void	my_mlx_pixel_put3d(t_game *game, int x, int y, int color);

// -- Parsing -- //
// - pars_main.c - //
int		parsing(t_texture *skin, t_cube *cube, char **argv);
void	check_component(t_texture *skin);
// - pars_color.c - //
int		rgb_checker(int *nb);
void	set_fc_color(t_texture *skin, int **color, char *line);
// - pars_verif.c - //
int		verif_file(t_cube *c);
int		verif_line(char *line);
int		verif_map(t_cube *cube);
void	verif_info(t_texture *skin, t_cube *cube);
// - pars_storage.c - //
int		saving_data(t_cube *cube, char *line, int index);
void	set_skin(t_texture *skin, char **texture, char *line);
// - pars_algo.c - //
int		algo_wall(t_cube *cube);
// - pars_utils.c - //
int		big_condition(char *line);
int		cal_len_color(char *line, int *i);
void	empty_line_scenario(t_cube *cube);

// -- Utils -- //
// - utils.c - //
void	init_struct(t_texture *skin, t_cube *cube);
int		len_map(t_cube *cube);
int		len_array(char **map);
char	**copy_map(char **map);
void	free_struct(char **map);

// -- functions --//
#endif